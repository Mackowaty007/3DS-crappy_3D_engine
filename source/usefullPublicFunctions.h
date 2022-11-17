#pragma once

void exitTheGame(){
	// Deinit libs
	C2D_Fini();
	C3D_Fini();
	gfxExit();
}

float cutANumber(float number,float max,float min){
	if (number>max){
		number=max;
	}
	if (number<min){
		number=min;
	}
	return number;
}

void handleInput(){
    hidScanInput();
	circlePosition circlePadPos;
	hidCircleRead(&circlePadPos);

	u32 kDown = hidKeysDown();
	u32 kHeld = hidKeysHeld();

	if (kDown & KEY_START){
		exitTheGame();
	}

	//rotate the player
	if (kHeld & KEY_A)
		playerRot[0] -= 0.1f;
	if (kHeld & KEY_Y)
		playerRot[0] += 0.1f;
	if (kHeld & KEY_X)
		playerRot[1] += 0.1f;
	if (kHeld & KEY_B)
		playerRot[1] -= 0.1f;
	playerRot[1] = cutANumber(playerRot[1],PI,0);

	//move the player
	//fowards and backwards
	playerPos[0] += sin(playerRot[0])*circlePadPos.dy*playerSpeed;//*deltaTime;
	playerPos[2] += cos(playerRot[0])*circlePadPos.dy*playerSpeed;//*deltaTime;
	//side to side
	playerPos[0] -= sin(playerRot[0]+PI/2)*circlePadPos.dx*playerSpeed;//*deltaTime;
	playerPos[2] -= cos(playerRot[0]+PI/2)*circlePadPos.dx*playerSpeed;//*deltaTime;
}