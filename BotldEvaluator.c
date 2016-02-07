#include <stdio.h>
#include <stdlib.h>

//Evaluator to be implemented

int main(int argc, char** argv) {
	int c = 0;

	//Checks if initial args are in the correct format
	if (argc != 2) {
		printf("Format: BotldEvaluator <cnt file name>\n");
		exit(1);
	}

	//Assigns a file pointer to the provided file
	char* fileName = argv[1];
	FILE* fd = fopen(fileName, "r");
	
	//Checks if the file is null
	if (fd == NULL) {
		printf("Could not open file %s\n", fileName);
		exit(1);
	}

	//Iterate through all characters in file
	while ((c = fgetc(fd)) != EOF) {
		//TODO: Evaluate code
	}

	return 0;
}

