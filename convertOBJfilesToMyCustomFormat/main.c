#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char headerFileString[] = "#pragma once\n\nfloat vertecies[8][3] = \n\nint lines[13][2] = \n\nint polygons[8][3] = \n";

int main()
{
	FILE* inputFile;
	FILE* outputFile;
	char ch;
	char ignoreThisLine = 'F';

	fputs(headerFileString, outputFile);

	// Opening file in reading mode
	inputFile = fopen("simpleShape.obj", "r");
	// Create a file to be used as output
	outputFile = fopen ("shape.h", "w");

	if (NULL == inputFile) {
		printf("file can't be opened \n");
	}
  
	do {
		ch = fgetc(inputFile);

		if (ch == '#'){
			//this line is a comment
			ignoreThisLine = 'T';
		}
		if (ch == '\n'){
			ignoreThisLine = 'F';
		}
		
		if(ignoreThisLine == 'F'){
			printf("%c",ch);
			putc(ch, outputFile);
		}
	} while (ch != EOF);

	// Closing the file
	fclose(inputFile);
	fclose(outputFile);
	return 0;
}
