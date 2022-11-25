C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
C2D_TargetClear(left, clrClear);
C2D_TargetClear(right, clrClear);
#ifndef DEBUG_MODE
C2D_TargetClear(down, clrClear);
#endif

C2D_SceneBegin(left);

printf("\x1b[1;1H");

//do this loop twice for the 3d display
//for (int i=0;i<2;i++){
    /*if(i == 1){
        C2D_SceneBegin(left);
    }
    else{
        C2D_SceneBegin(right);
    }*/
	//draw vertexes
    //declaring usefull variables (they calculate the angle from the players view to vertexes)
    float angleToPoint[2];
	float angleDifference[2];
	float angleToPointBeggining[2];
	float angleDifferenceBeggining[2];
	float angleToPointEnd[2];
	float angleDifferenceEnd[2];
	float angleToPointTheFourth[2];
	float angleDifferenceTheFourth[2];
    //do this for every vertex of the square
	for(int i=0;i<LEN(vertecies);i++){
		//calculate the angle to a vertecies verticy
        if(vertecies[i][1]-playerPos[1]>=0){
            angleToPoint[1] = atan((sqrt(pow(vertecies[i][2]-playerPos[2],2)+pow(vertecies[i][0]-playerPos[0],2)))/(vertecies[i][1]-playerPos[1]));
        }
        else{
            angleToPoint[1] = atan((sqrt(pow(vertecies[i][2]-playerPos[2],2)+pow(vertecies[i][0]-playerPos[0],2)))/(vertecies[i][1]-playerPos[1]))+PI;
        }
		if(vertecies[i][2]-playerPos[2]>=0){
			angleToPoint[0] = atan((vertecies[i][0]-playerPos[0])/(vertecies[i][2]-playerPos[2]));
		}
		else{
			angleToPoint[0] = atan((vertecies[i][0]-playerPos[0])/(vertecies[i][2]-playerPos[2]))+PI;
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

        C2D_DrawRectSolid(TOP_SCREEN_WIDTH/2 + (angleDifference[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,TOP_SCREEN_HEIGHT/2 + (angleDifference[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,0,POINT_SIZE,POINT_SIZE, vertexColor);
	}

	//draw the lines
    //do this for every vertex of the square
	for(int i=0;i<LEN(polygons)-1;i++){
		//calculate the angle tocalculate the angle from the center of the screen to the vertex a vertecies verticy
		if(vertecies[polygons[i][0]][1]-playerPos[1]>=0){
			angleToPoint[1] = atan((sqrt(pow(vertecies[polygons[i][0]][2]-playerPos[2],2)+pow(vertecies[polygons[i][0]][0]-playerPos[0],2)))/(vertecies[polygons[i][0]][1]-playerPos[1]));
		}
		else{
			angleToPoint[1] = atan((sqrt(pow(vertecies[polygons[i][0]][2]-playerPos[2],2)+pow(vertecies[polygons[i][0]][0]-playerPos[0],2)))/(vertecies[polygons[i][0]][1]-playerPos[1]))+PI;
		}
		if(vertecies[polygons[i][0]][2]-playerPos[2]>=0){
			angleToPoint[0] = atan((vertecies[polygons[i][0]][0]-playerPos[0])/(vertecies[polygons[i][0]][2]-playerPos[2]));
		}
		else{
			angleToPoint[0] = atan((vertecies[polygons[i][0]][0]-playerPos[0])/(vertecies[polygons[i][0]][2]-playerPos[2]))+PI;
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

		//calculate the angle to a vertecies verticy
		if(vertecies[polygons[i][1]][1]-playerPos[1]>=0){
			angleToPointBeggining[1] = atan((sqrt(pow(vertecies[polygons[i][1]][2]-playerPos[2],2)+pow(vertecies[polygons[i][1]][0]-playerPos[0],2)))/(vertecies[polygons[i][1]][1]-playerPos[1]));
		}
		else{
			angleToPointBeggining[1] = atan((sqrt(pow(vertecies[polygons[i][1]][2]-playerPos[2],2)+pow(vertecies[polygons[i][1]][0]-playerPos[0],2)))/(vertecies[polygons[i][1]][1]-playerPos[1]))+PI;
		}
		if(vertecies[polygons[i][1]][2]-playerPos[2]>=0){
			angleToPointBeggining[0] = atan((vertecies[polygons[i][1]][0]-playerPos[0])/(vertecies[polygons[i][1]][2]-playerPos[2]));
		}
		else{
			angleToPointBeggining[0] = atan((vertecies[polygons[i][1]][0]-playerPos[0])/(vertecies[polygons[i][1]][2]-playerPos[2]))+PI;
		}

		if(angleToPointBeggining[0]>PI){
			angleToPointBeggining[0] -= 2*PI;
		}
		if(angleToPointBeggining[0]<-PI){
			angleToPointBeggining[0] += 2*PI;
		}
		if(angleToPointBeggining[1]>PI){
			angleToPointBeggining[1] -= 2*PI;
		}
		if(angleToPointBeggining[1]<-PI){
			angleToPointBeggining[1] += 2*PI;
		}
		angleDifferenceBeggining[0] = playerRot[0]-angleToPointBeggining[0];
		if(angleDifferenceBeggining[0]>PI){
			angleDifferenceBeggining[0] -= 2*PI;
		}
		if(angleDifferenceBeggining[0]<-PI){
			angleDifferenceBeggining[0] += 2*PI;
		}
		angleDifferenceBeggining[1] = playerRot[1]-angleToPointBeggining[1];
		if(angleDifferenceBeggining[1]>PI){
			angleDifferenceBeggining[1] -= 2*PI;
		}
		if(angleDifferenceBeggining[1]<-PI){
			angleDifferenceBeggining[1] += 2*PI;
		}

		//calculate the angle tocalculate the angle from the center of the screen to the vertex a vertecies verticy
		if(vertecies[polygons[i][0]][1]-playerPos[1]>=0){
			angleToPointEnd[1] = atan((sqrt(pow(vertecies[polygons[i][0]][2]-playerPos[2],2)+pow(vertecies[polygons[i][0]][0]-playerPos[0],2)))/(vertecies[polygons[i][0]][1]-playerPos[1]));
		}
		else{
			angleToPointEnd[1] = atan((sqrt(pow(vertecies[polygons[i][0]][2]-playerPos[2],2)+pow(vertecies[polygons[i][0]][0]-playerPos[0],2)))/(vertecies[polygons[i][0]][1]-playerPos[1]))+PI;
		}
		if(vertecies[polygons[i][0]][2]-playerPos[2]>=0){
			angleToPointEnd[0] = atan((vertecies[polygons[i][0]][0]-playerPos[0])/(vertecies[polygons[i][0]][2]-playerPos[2]));
		}
		else{
			angleToPointEnd[0] = atan((vertecies[polygons[i][0]][0]-playerPos[0])/(vertecies[polygons[i][0]][2]-playerPos[2]))+PI;
		}

		if(angleToPointEnd[0]>PI){
			angleToPointEnd[0] -= 2*PI;
		}
		if(angleToPointEnd[0]<-PI){
			angleToPointEnd[0] += 2*PI;
		}
		if(angleToPointEnd[1]>PI){
			angleToPointEnd[1] -= 2*PI;
		}
		if(angleToPointEnd[1]<-PI){
			angleToPointEnd[1] += 2*PI;
		}
		angleDifferenceEnd[0] = playerRot[0]-angleToPointEnd[0];
		if(angleDifferenceEnd[0]>PI){
			angleDifferenceEnd[0] -= 2*PI;
		}
		if(angleDifferenceEnd[0]<-PI){
			angleDifferenceEnd[0] += 2*PI;
		}
		angleDifferenceEnd[1] = playerRot[1]-angleToPointEnd[1];
		if(angleDifferenceEnd[1]>PI){
			angleDifferenceEnd[1] -= 2*PI;
		}
		if(angleDifferenceEnd[1]<-PI){
			angleDifferenceEnd[1] += 2*PI;
		}

		//calculate the angle tocalculate the angle from the center of the screen to the vertex a vertecies verticy
		if (polygons[i][3] != -1){
			if(vertecies[polygons[i][0]][1]-playerPos[1]>=0){
				angleToPointTheFourth[1] = atan((sqrt(pow(vertecies[polygons[i][0]][2]-playerPos[2],2)+pow(vertecies[polygons[i][0]][0]-playerPos[0],2)))/(vertecies[polygons[i][0]][1]-playerPos[1]));
			}
			else{
				angleToPointTheFourth[1] = atan((sqrt(pow(vertecies[polygons[i][0]][2]-playerPos[2],2)+pow(vertecies[polygons[i][0]][0]-playerPos[0],2)))/(vertecies[polygons[i][0]][1]-playerPos[1]))+PI;
			}
			if(vertecies[polygons[i][0]][2]-playerPos[2]>=0){
				angleToPointTheFourth[0] = atan((vertecies[polygons[i][0]][0]-playerPos[0])/(vertecies[polygons[i][0]][2]-playerPos[2]));
			}
			else{
				angleToPointTheFourth[0] = atan((vertecies[polygons[i][0]][0]-playerPos[0])/(vertecies[polygons[i][0]][2]-playerPos[2]))+PI;
			}

			if(angleToPointTheFourth[0]>PI){
				angleToPointTheFourth[0] -= 2*PI;
			}
			if(angleToPointTheFourth[0]<-PI){
				angleToPointTheFourth[0] += 2*PI;
			}
			if(angleToPointTheFourth[1]>PI){
				angleToPointTheFourth[1] -= 2*PI;
			}
			if(angleToPointTheFourth[1]<-PI){
				angleToPointTheFourth[1] += 2*PI;
			}
			angleDifferenceTheFourth[0] = playerRot[0]-angleToPointTheFourth[0];
			if(angleDifferenceTheFourth[0]>PI){
				angleDifferenceTheFourth[0] -= 2*PI;
			}
			if(angleDifferenceTheFourth[0]<-PI){
				angleDifferenceTheFourth[0] += 2*PI;
			}
			angleDifferenceTheFourth[1] = playerRot[1]-angleToPointTheFourth[1];
			if(angleDifferenceTheFourth[1]>PI){
				angleDifferenceTheFourth[1] -= 2*PI;
			}
			if(angleDifferenceTheFourth[1]<-PI){
				angleDifferenceTheFourth[1] += 2*PI;
			}
		}

		C2D_DrawLine(
		TOP_SCREEN_WIDTH /2 + (angleDifference[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
		TOP_SCREEN_HEIGHT/2 + (angleDifference[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
		TOP_SCREEN_WIDTH /2 + (angleDifferenceBeggining[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
		TOP_SCREEN_HEIGHT/2 + (angleDifferenceBeggining[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
		1,0);
		C2D_DrawLine(
		TOP_SCREEN_WIDTH /2 + (angleDifferenceEnd[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
		TOP_SCREEN_HEIGHT/2 + (angleDifferenceEnd[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
		TOP_SCREEN_WIDTH /2 + (angleDifferenceBeggining[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
		TOP_SCREEN_HEIGHT/2 + (angleDifferenceBeggining[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
		1,0);
		C2D_DrawLine(
		TOP_SCREEN_WIDTH /2 + (angleDifference[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
		TOP_SCREEN_HEIGHT/2 + (angleDifference[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
		TOP_SCREEN_WIDTH /2 + (angleDifferenceEnd[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
		TOP_SCREEN_HEIGHT/2 + (angleDifferenceEnd[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
		1,0);
		if (polygons[i][3] != -1){
			C2D_DrawLine(
			TOP_SCREEN_WIDTH /2 + (angleDifferenceTheFourth[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
			TOP_SCREEN_HEIGHT/2 + (angleDifferenceTheFourth[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
			TOP_SCREEN_WIDTH /2 + (angleDifferenceEnd[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
			TOP_SCREEN_HEIGHT/2 + (angleDifferenceEnd[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
			1,0);
			C2D_DrawLine(
			TOP_SCREEN_WIDTH /2 + (angleDifferenceTheFourth[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
			TOP_SCREEN_HEIGHT/2 + (angleDifferenceTheFourth[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
			TOP_SCREEN_WIDTH /2 + (angleDifferenceBeggining[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
			TOP_SCREEN_HEIGHT/2 + (angleDifferenceBeggining[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
			1,0);
			C2D_DrawLine(
			TOP_SCREEN_WIDTH /2 + (angleDifferenceTheFourth[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
			TOP_SCREEN_HEIGHT/2 + (angleDifferenceTheFourth[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
			TOP_SCREEN_WIDTH /2 + (angleDifference[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
			TOP_SCREEN_HEIGHT/2 + (angleDifference[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
			1,0);
		}
	}
//}

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