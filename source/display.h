C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
C2D_TargetClear(left, clrClear);
C2D_TargetClear(right, clrClear);
#ifndef DEBUG_MODE
C2D_TargetClear(down, clrClear);
#endif

#ifdef DISABLE_THE_3D_MODE
C2D_SceneBegin(left);
cameraPos[0] = playerPos[0];
cameraPos[1] = playerPos[1];
cameraPos[2] = playerPos[2];
#endif

#ifndef DISABLE_THE_3D_MODE
//do this loop twice for the 3d display
for (int whichDisplay=0;whichDisplay<2;whichDisplay++){
	if(gfxIs3D()){
		if(whichDisplay == 1){
			C2D_SceneBegin(left);
			cameraPos[0] = playerPos[0]+cos(playerRot[0])*5;
			cameraPos[1] = playerPos[1];
			cameraPos[2] = playerPos[2]+sin(playerRot[0])*5;
		}
		else{
			C2D_SceneBegin(right);
			cameraPos[0] = playerPos[0]-cos(playerRot[0])*5;
			cameraPos[1] = playerPos[1];
			cameraPos[2] = playerPos[2]-sin(playerRot[0])*5;
		}
	}
	else{
		C2D_SceneBegin(left);
		cameraPos[0] = playerPos[0];
		cameraPos[1] = playerPos[1];
		cameraPos[2] = playerPos[2];
	}
#endif

	//draw vertexes
    //declaring usefull variables (they calculate the angle from the players view to vertexes)
    float angleToPointA[2];
	float angleDifferenceA[2];
	float angleToPointB[2];
	float angleDifferenceB[2];
	float angleToPointC[2];
	float angleDifferenceC[2];
	float angleToPointD[2];
	float angleDifferenceD[2];
    //do this for every vertex of the square

	//calculate all the angles
    //do this for every vertex of the square
	for(int i=0;i<LEN(polygons);i++){

		//fun with colors
		polygonColor = C2D_Color32f(i/(float)LEN(polygons),0,0,1.0);

		//calculate the angle tocalculate the angle from the center of the screen to the vertex a vertecies verticy
		if(vertecies[polygons[i][0]][1]-cameraPos[1]>=0){
			angleToPointA[1] = atan((sqrt(pow(vertecies[polygons[i][0]][2]-cameraPos[2],2)+pow(vertecies[polygons[i][0]][0]-cameraPos[0],2)))/(vertecies[polygons[i][0]][1]-cameraPos[1]));
		}
		else{
			angleToPointA[1] = atan((sqrt(pow(vertecies[polygons[i][0]][2]-cameraPos[2],2)+pow(vertecies[polygons[i][0]][0]-cameraPos[0],2)))/(vertecies[polygons[i][0]][1]-cameraPos[1]))+PI;
		}
		if(vertecies[polygons[i][0]][2]-cameraPos[2]>=0){
			angleToPointA[0] = atan((vertecies[polygons[i][0]][0]-cameraPos[0])/(vertecies[polygons[i][0]][2]-cameraPos[2]));
		}
		else{
			angleToPointA[0] = atan((vertecies[polygons[i][0]][0]-cameraPos[0])/(vertecies[polygons[i][0]][2]-cameraPos[2]))+PI;
		}

		if(angleToPointA[0]>PI){
			angleToPointA[0] -= 2*PI;
		}
		if(angleToPointA[0]<-PI){
			angleToPointA[0] += 2*PI;
		}
		if(angleToPointA[1]>PI){
			angleToPointA[1] -= 2*PI;
		}
		if(angleToPointA[1]<-PI){
			angleToPointA[1] += 2*PI;
		}
		angleDifferenceA[0] = playerRot[0]-angleToPointA[0];
		if(angleDifferenceA[0]>PI){
			angleDifferenceA[0] -= 2*PI;
		}
		if(angleDifferenceA[0]<-PI){
			angleDifferenceA[0] += 2*PI;
		}
		angleDifferenceA[1] = playerRot[1]-angleToPointA[1];
		if(angleDifferenceA[1]>PI){
			angleDifferenceA[1] -= 2*PI;
		}
		if(angleDifferenceA[1]<-PI){
			angleDifferenceA[1] += 2*PI;
		}

		//calculate the angle to a vertecies verticy
		if(vertecies[polygons[i][1]][1]-cameraPos[1]>=0){
			angleToPointB[1] = atan((sqrt(pow(vertecies[polygons[i][1]][2]-cameraPos[2],2)+pow(vertecies[polygons[i][1]][0]-cameraPos[0],2)))/(vertecies[polygons[i][1]][1]-cameraPos[1]));
		}
		else{
			angleToPointB[1] = atan((sqrt(pow(vertecies[polygons[i][1]][2]-cameraPos[2],2)+pow(vertecies[polygons[i][1]][0]-cameraPos[0],2)))/(vertecies[polygons[i][1]][1]-cameraPos[1]))+PI;
		}
		if(vertecies[polygons[i][1]][2]-cameraPos[2]>=0){
			angleToPointB[0] = atan((vertecies[polygons[i][1]][0]-cameraPos[0])/(vertecies[polygons[i][1]][2]-cameraPos[2]));
		}
		else{
			angleToPointB[0] = atan((vertecies[polygons[i][1]][0]-cameraPos[0])/(vertecies[polygons[i][1]][2]-cameraPos[2]))+PI;
		}

		if(angleToPointB[0]>PI){
			angleToPointB[0] -= 2*PI;
		}
		if(angleToPointB[0]<-PI){
			angleToPointB[0] += 2*PI;
		}
		if(angleToPointB[1]>PI){
			angleToPointB[1] -= 2*PI;
		}
		if(angleToPointB[1]<-PI){
			angleToPointB[1] += 2*PI;
		}
		angleDifferenceB[0] = playerRot[0]-angleToPointB[0];
		if(angleDifferenceB[0]>PI){
			angleDifferenceB[0] -= 2*PI;
		}
		if(angleDifferenceB[0]<-PI){
			angleDifferenceB[0] += 2*PI;
		}
		angleDifferenceB[1] = playerRot[1]-angleToPointB[1];
		if(angleDifferenceB[1]>PI){
			angleDifferenceB[1] -= 2*PI;
		}
		if(angleDifferenceB[1]<-PI){
			angleDifferenceB[1] += 2*PI;
		}

		//calculate the angle tocalculate the angle from the center of the screen to the vertex a vertecies verticy
		if(vertecies[polygons[i][2]][1]-cameraPos[1]>=0){
			angleToPointC[1] = atan((sqrt(pow(vertecies[polygons[i][2]][2]-cameraPos[2],2)+pow(vertecies[polygons[i][2]][0]-cameraPos[0],2)))/(vertecies[polygons[i][2]][1]-cameraPos[1]));
		}
		else{
			angleToPointC[1] = atan((sqrt(pow(vertecies[polygons[i][2]][2]-cameraPos[2],2)+pow(vertecies[polygons[i][2]][0]-cameraPos[0],2)))/(vertecies[polygons[i][2]][1]-cameraPos[1]))+PI;
		}
		if(vertecies[polygons[i][2]][2]-cameraPos[2]>=0){
			angleToPointC[0] = atan((vertecies[polygons[i][2]][0]-cameraPos[0])/(vertecies[polygons[i][2]][2]-cameraPos[2]));
		}
		else{
			angleToPointC[0] = atan((vertecies[polygons[i][2]][0]-cameraPos[0])/(vertecies[polygons[i][2]][2]-cameraPos[2]))+PI;
		}

		if(angleToPointC[0]>PI){
			angleToPointC[0] -= 2*PI;
		}
		if(angleToPointC[0]<-PI){
			angleToPointC[0] += 2*PI;
		}
		if(angleToPointC[1]>PI){
			angleToPointC[1] -= 2*PI;
		}
		if(angleToPointC[1]<-PI){
			angleToPointC[1] += 2*PI;
		}
		angleDifferenceC[0] = playerRot[0]-angleToPointC[0];
		if(angleDifferenceC[0]>PI){
			angleDifferenceC[0] -= 2*PI;
		}
		if(angleDifferenceC[0]<-PI){
			angleDifferenceC[0] += 2*PI;
		}
		angleDifferenceC[1] = playerRot[1]-angleToPointC[1];
		if(angleDifferenceC[1]>PI){
			angleDifferenceC[1] -= 2*PI;
		}
		if(angleDifferenceC[1]<-PI){
			angleDifferenceC[1] += 2*PI;
		}

		//if the current face has 4 points do this
		if (polygons[i][3] != -1){
			if(polygons[i][3] < 0)
			printf("%i\n",polygons[i][3]);
			if(vertecies[polygons[i][3]][1]-cameraPos[1]>=0){
				angleToPointD[1] = atan((sqrt(pow(vertecies[polygons[i][3]][2]-cameraPos[2],2)+pow(vertecies[polygons[i][3]][0]-cameraPos[0],2)))/(vertecies[polygons[i][3]][1]-cameraPos[1]));
			}
			else{
				angleToPointD[1] = atan((sqrt(pow(vertecies[polygons[i][3]][2]-cameraPos[2],2)+pow(vertecies[polygons[i][3]][0]-cameraPos[0],2)))/(vertecies[polygons[i][3]][1]-cameraPos[1]))+PI;
			}
			if(vertecies[polygons[i][3]][2]-cameraPos[2]>=0){
				angleToPointD[0] = atan((vertecies[polygons[i][3]][0]-cameraPos[0])/(vertecies[polygons[i][3]][2]-cameraPos[2]));
			}
			else{
				angleToPointD[0] = atan((vertecies[polygons[i][3]][0]-cameraPos[0])/(vertecies[polygons[i][3]][2]-cameraPos[2]))+PI;
			}

			if(angleToPointD[0]>PI){
				angleToPointD[0] -= 2*PI;
			}
			if(angleToPointD[0]<-PI){
				angleToPointD[0] += 2*PI;
			}
			if(angleToPointD[1]>PI){
				angleToPointD[1] -= 2*PI;
			}
			if(angleToPointD[1]<-PI){
				angleToPointD[1] += 2*PI;
			}
			angleDifferenceD[0] = playerRot[0]-angleToPointD[0];
			if(angleDifferenceD[0]>PI){
				angleDifferenceD[0] -= 2*PI;
			}
			if(angleDifferenceD[0]<-PI){
				angleDifferenceD[0] += 2*PI;
			}
			angleDifferenceD[1] = playerRot[1]-angleToPointD[1];
			if(angleDifferenceD[1]>PI){
				angleDifferenceD[1] -= 2*PI;
			}
			if(angleDifferenceD[1]<-PI){
				angleDifferenceD[1] += 2*PI;
			}
		}

		#ifdef DRAW_FACES
		//check if the face should be culled or not
		double result = atan2(angleDifferenceC[1] - angleDifferenceA[1], angleDifferenceC[0] - angleDifferenceA[0]) - atan2(angleDifferenceB[1] - angleDifferenceA[1], angleDifferenceB[0] - angleDifferenceA[0]);

		//makes it impossible for the result to be negative
		if (result < 0){
			result += 2*PI;
		}

		if(result < 0 || result > PI){
			//check the distance to a polygon
			float distanceToPolygon = -sqrt(pow(cameraPos[0]-vertecies[polygons[i][0]][0],2) + pow(cameraPos[1]-vertecies[polygons[i][0]][1],2) + pow(cameraPos[2]-vertecies[polygons[i][0]][2],2));

			//printf("distance to the polygon = %f\n",distanceToPolygon);

			C2D_DrawTriangle(
				TOP_SCREEN_WIDTH /2 + (angleDifferenceA[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
				TOP_SCREEN_HEIGHT/2 + (angleDifferenceA[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,polygonColor,
				TOP_SCREEN_WIDTH /2 + (angleDifferenceB[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
				TOP_SCREEN_HEIGHT/2 + (angleDifferenceB[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,polygonColor,
				TOP_SCREEN_WIDTH /2 + (angleDifferenceC[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
				TOP_SCREEN_HEIGHT/2 + (angleDifferenceC[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,polygonColor,distanceToPolygon/1000
			);
			//if the polygon has 4 sides draw another triangle
			if (polygons[i][3] != -1){
				C2D_DrawTriangle(
					TOP_SCREEN_WIDTH /2 + (angleDifferenceA[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
					TOP_SCREEN_HEIGHT/2 + (angleDifferenceA[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,polygonColor,
					TOP_SCREEN_WIDTH /2 + (angleDifferenceD[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
					TOP_SCREEN_HEIGHT/2 + (angleDifferenceD[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,polygonColor,
					TOP_SCREEN_WIDTH /2 + (angleDifferenceC[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
					TOP_SCREEN_HEIGHT/2 + (angleDifferenceC[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,polygonColor,distanceToPolygon/1000
				);
			}
		}
		#endif

		#ifdef DRAW_LINES
		C2D_DrawLine(
		TOP_SCREEN_WIDTH /2 + (angleDifferenceA[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
		TOP_SCREEN_HEIGHT/2 + (angleDifferenceA[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
		TOP_SCREEN_WIDTH /2 + (angleDifferenceB[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
		TOP_SCREEN_HEIGHT/2 + (angleDifferenceB[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
		LINE_WIDTH,0);
		C2D_DrawLine(
		TOP_SCREEN_WIDTH /2 + (angleDifferenceC[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
		TOP_SCREEN_HEIGHT/2 + (angleDifferenceC[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
		TOP_SCREEN_WIDTH /2 + (angleDifferenceB[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
		TOP_SCREEN_HEIGHT/2 + (angleDifferenceB[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
		LINE_WIDTH,0);
		C2D_DrawLine(
		TOP_SCREEN_WIDTH /2 + (angleDifferenceA[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
		TOP_SCREEN_HEIGHT/2 + (angleDifferenceA[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
		TOP_SCREEN_WIDTH /2 + (angleDifferenceC[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
		TOP_SCREEN_HEIGHT/2 + (angleDifferenceC[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
		LINE_WIDTH,0);
		//draw additional lines if a face has 4 corners
		if (polygons[i][3] != -1){
			/*
			C2D_DrawLine(
			TOP_SCREEN_WIDTH /2 + (angleDifferenceD[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
			TOP_SCREEN_HEIGHT/2 + (angleDifferenceD[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
			TOP_SCREEN_WIDTH /2 + (angleDifferenceC[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
			TOP_SCREEN_HEIGHT/2 + (angleDifferenceC[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
			LINE_WIDTH,0);
			*/
			/*
			C2D_DrawLine(
			TOP_SCREEN_WIDTH /2 + (angleDifferenceD[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
			TOP_SCREEN_HEIGHT/2 + (angleDifferenceD[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
			TOP_SCREEN_WIDTH /2 + (angleDifferenceB[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
			TOP_SCREEN_HEIGHT/2 + (angleDifferenceB[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
			LINE_WIDTH,0);
			*/
			/*
			C2D_DrawLine(
			TOP_SCREEN_WIDTH /2 + (angleDifferenceD[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
			TOP_SCREEN_HEIGHT/2 + (angleDifferenceD[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
			TOP_SCREEN_WIDTH /2 + (angleDifferenceA[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,
			TOP_SCREEN_HEIGHT/2 + (angleDifferenceA[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,lineColor,
			LINE_WIDTH,0);
			*/
		}
		#endif

		#ifdef DRAW_VERTECIES
		C2D_DrawRectSolid(TOP_SCREEN_WIDTH/2 + (angleDifferenceA[0])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,TOP_SCREEN_HEIGHT/2 + (angleDifferenceA[1])*(TOP_SCREEN_WIDTH/TOP_SCREEN_HEIGHT)*FOV,0,POINT_SIZE,POINT_SIZE, vertexColor);
		#endif
	}
}

#ifndef DEBUG_MODE
C2D_SceneBegin(down);
//draw all the vertecies
for(int i=0;i<LEN(vertecies);i++){
	C2D_DrawRectSolid(vertecies[i][0]-cameraPos[0]+BOT_SCREEN_WIDTH/2-POINT_SIZE/2,vertecies[i][2]-cameraPos[2]+BOT_SCREEN_HEIGHT/2-POINT_SIZE/2,0,POINT_SIZE,POINT_SIZE, vertexColor);
}
//draw the player
C2D_DrawRectSolid(BOT_SCREEN_WIDTH/2-10/2,BOT_SCREEN_HEIGHT/2-10/2,0,10,10, playerColor);
C2D_DrawLine(BOT_SCREEN_WIDTH/2,BOT_SCREEN_HEIGHT/2,playerColor,BOT_SCREEN_WIDTH/2-sin(playerRot[0]+PI)*20,BOT_SCREEN_HEIGHT/2-cos(playerRot[0]+PI)*20,playerColor,2,0);
#endif

C3D_FrameEnd(0);
