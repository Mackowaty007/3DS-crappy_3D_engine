// Simple citro2d untextured shape example
#include <3ds.h>
#include <citro2d.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TOP_SCREEN_WIDTH  400
#define TOP_SCREEN_HEIGHT 240
#define BOT_SCREEN_WIDTH  320
#define BOT_SCREEN_HEIGHT 240
#define POINT_SIZE 4
#define PI 3.1415926535

#define DEBUG_MODE//shows the console

float playerPos[3] = {0,0,0};
float playerRot[2] = {0,PI/2};
float playerSpeed = 0.1;
//all the vertex positions
float square[9][3] = {{-10,-10,-10},{-10,-10,10},{-10,10,-10},{-10,10,10},{10,-10,-10},{10,-10,10},{10,10,-10},{10,10,10},{0,0,0}};

struct timeval begin, end;
double deltaTime;

#include "usefullPublicFunctions.h"

//---------------------------------------------------------------------------------
int main(int argc, char* argv[]) {
//---------------------------------------------------------------------------------
	// Init libs
	gfxInitDefault();
	C3D_Init(C3D_DEFAULT_CMDBUF_SIZE);
	C2D_Init(C2D_DEFAULT_MAX_OBJECTS);
	C2D_Prepare();
	#ifdef DEBUG_MODE
	consoleInit(GFX_BOTTOM, NULL);
	#endif

	// Create screens
	C3D_RenderTarget* left = C2D_CreateScreenTarget(GFX_TOP, GFX_LEFT);
	C3D_RenderTarget* right =C2D_CreateScreenTarget(GFX_TOP, GFX_RIGHT);
	#ifndef DEBUG_MODE
	C3D_RenderTarget* down = C2D_CreateScreenTarget(GFX_BOTTOM, GFX_LEFT);
	#endif

	gfxSet3D(true);

	// Create colors
	u32 clrClear   = C2D_Color32(0x0F, 0x00, 0x0F, 0xFF);
    u32 vertexColor= C2D_Color32(0xF0, 0x1F, 0x0F, 0xFF);

	// Stop measuring time and calculate the elapsed time
	gettimeofday(&end, 0);
	

	// Main loop
	while (aptMainLoop())
	{
		gettimeofday(&begin, 0);
		deltaTime = -(end.tv_usec - begin.tv_usec)*1e-6;

		handleInput();

		printf("\x1b[1;1H Pos x: %f y: %f",playerPos[0], playerPos[2]);
		#include "display.h"
		
	}

	exitTheGame();
	return 0;
} 
