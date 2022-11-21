C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
C2D_TargetClear(left, clrClear);
C2D_TargetClear(right, clrClear);
#ifndef DEBUG_MODE
C2D_TargetClear(down, clrClear);
#endif

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
	for(int i=0;i<LEN(vertecies);i++){
		//calculate the angle to a vertecies verticy
		if(vertecies[i][2]-playerPos[2]>=0){
			angleToPoint[0] = atan((vertecies[i][0]-playerPos[0])/(vertecies[i][2]-playerPos[2]));
		}
		else{
			angleToPoint[0] = atan((vertecies[i][0]-playerPos[0])/(vertecies[i][2]-playerPos[2]))+PI;
		}
        if(vertecies[i][1]-playerPos[1]>=0){
            angleToPoint[1] = atan((sqrt(pow(vertecies[i][2]-playerPos[2],2)+pow(vertecies[i][0]-playerPos[0],2)))/(vertecies[i][1]-playerPos[1]));
        }
        else{
            angleToPoint[1] = atan((sqrt(pow(vertecies[i][2]-playerPos[2],2)+pow(vertecies[i][0]-playerPos[0],2)))/(vertecies[i][1]-playerPos[1]))+PI;
        }

		if(angleToPoint[0]>PI){
			angleToPoint[0] -= 2*PI;
		}
		if(angleToPoint[0]<-PI){
			angleToPoint[0] += 2*PI;
		}
		if(angleToPoint[1]>PI){
			angleToPoint[1] -= 2*PI;
		}
		if(angleToPoint[1]<-PI){
			angleToPoint[1] += 2*PI;
		}

		angleDifference[0] = playerRot[0]-angleToPoint[0];
		if(angleDifference[0]>PI){
			angleDifference[0] -= 2*PI;
		}
		if(angleDifference[0]<-PI){
			angleDifference[0] += 2*PI;
		}
		angleDifference[1] = playerRot[1]-angleToPoint[1];
		if(angleDifference[1]>PI){
			angleDifference[1] -= 2*PI;
		}
		if(angleDifference[1]<-PI){
			angleDifference[1] += 2*PI;
		}

        C2D_DrawRectSolid(TOP_SCREEN_WIDTH/2 + (angleDifference[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*200,TOP_SCREEN_HEIGHT/2 + (angleDifference[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*200,0,POINT_SIZE,POINT_SIZE, vertexColor);
		//C2D_DrawLine()
		printf("\x1b[2;1H angleDifference x = %f\n y = %f",angleDifference[0],angleDifference[1]);
		printf("\x1b[4;1H test test");
	}
}

#ifndef DEBUG_MODE
C2D_SceneBegin(down);
//draw all the vertecies
for(int i=0;i<LEN(vertecies);i++){
	C2D_DrawRectSolid(vertecies[i][0]+playerPos[0]+BOT_SCREEN_WIDTH/2-POINT_SIZE/2,vertecies[i][2]+playerPos[2]+BOT_SCREEN_HEIGHT/2-POINT_SIZE/2,0,POINT_SIZE,POINT_SIZE, vertexColor);
}
//draw the player
C2D_DrawRectSolid(BOT_SCREEN_WIDTH/2-10/2,BOT_SCREEN_HEIGHT/2-10/2,0,10,10, playerColor);
C2D_DrawLine(BOT_SCREEN_WIDTH/2,BOT_SCREEN_HEIGHT/2,playerColor,BOT_SCREEN_WIDTH/2+sin(playerRot[0]+PI)*20,BOT_SCREEN_HEIGHT/2+cos(playerRot[0]+PI)*20,playerColor,2,0);
#endif

C3D_FrameEnd(0);