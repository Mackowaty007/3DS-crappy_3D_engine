C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
C2D_TargetClear(left, clrClear);
C2D_TargetClear(right, clrClear);

//do this loop twice for the 3d display
for (int i=0;i<2;i++){
    if(i == 1){
        C2D_SceneBegin(left);
    }
    else{
        C2D_SceneBegin(right);
    }

    //calculate the angle from the center of the screen to the vertex
    float angleToPoint[2];
	float angleDifference[2];
    //do this for every vertex of the square
	for(int i=0;i<LEN(square);i++){
		//calculate the angle to a square verticy
		if(square[i][2]-playerPos[2]>=0){
			angleToPoint[0] = atan((square[i][0]-playerPos[0])/(square[i][2]-playerPos[2]));
		}
		else{
			angleToPoint[0] = atan((square[i][0]-playerPos[0])/(square[i][2]-playerPos[2]))+PI;
		}
        if(square[i][1]-playerPos[1]>=0){
            angleToPoint[1] = atan((sqrt(pow(square[i][2]-playerPos[2],2)+pow(square[i][0]-playerPos[0],2)))/(square[i][1]-playerPos[1]));
        }
        else{
            angleToPoint[1] = atan((sqrt(pow(square[i][2]-playerPos[2],2)+pow(square[i][0]-playerPos[0],2)))/(square[i][1]-playerPos[1]))+PI;
        }

		while(playerRot[0]>PI){
			playerRot[0] -= 2*PI;
		}
		while(playerRot[0]<-PI){
			playerRot[0] += 2*PI;
		}
		while(angleToPoint[0]>PI){
			angleToPoint[0] -= 2*PI;
		}
		while(angleToPoint[0]<-PI){
			angleToPoint[0] += 2*PI;
		}
		while(playerRot[1]>PI){
			playerRot[1] -= 2*PI;
		}
		while(playerRot[1]<-PI){
			playerRot[1] += 2*PI;
		}
		while(angleToPoint[1]>PI){
			angleToPoint[1] -= 2*PI;
		}
		while(angleToPoint[1]<-PI){
			angleToPoint[1] += 2*PI;
		}

		angleDifference[0] = playerRot[0]-angleToPoint[0];
		while(angleDifference[0]>PI){
			angleDifference[0] -= 2*PI;
		}
		while(angleDifference[0]<-PI){
			angleDifference[0] += 2*PI;
		}
		angleDifference[1] = playerRot[1]-angleToPoint[1];
		while(angleDifference[1]>PI){
			angleDifference[1] -= 2*PI;
		}
		while(angleDifference[1]<-PI){
			angleDifference[1] += 2*PI;
		}

        C2D_DrawRectSolid(TOP_SCREEN_WIDTH/2 + (angleDifference[0])*TOP_SCREEN_WIDTH,TOP_SCREEN_HEIGHT/2 + (angleDifference[1])*TOP_SCREEN_HEIGHT,0,POINT_SIZE,POINT_SIZE, vertexColor);
	}

}

#ifndef DEBUG_MODE
C2D_SceneBegin(down);
C2D_DrawRectSolid(100,123,0,10,50, vertexColor);
#endif

C3D_FrameEnd(0);