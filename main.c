#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// distance v0 - kaispishock

// function prototypes
float distCalc(float a, float b, float c, float d);

// main function - handles the arguments
int main(int argc, char * argv[]) {
	if (argv[1]="-h","--help") {
		printHelp();
		return 0;
	} else if (argc=4) {
		float x1,x2,y1,y2;	// make the vars.
		x1=atof(argv[1]);	// take float from string, and use it to define vars.
		x2=atof(argv[2]);
		y1=atof(argv[3]);
		y2=atof(argv[4]);
		distCalc(x2,x1,y2,y1);	// calculate distance
		return 0;	// exit
	} else {
		printf("Invalid number of arguments (exit code 1)/n");
		printHelp();
		return 1;
	}
}
float distCalc(float a, float b, float c, float d) { // distance calculation function.
	float e=a-b; float f=c-d;			// incredibly cringe solution.
	e=powf(e, 2.0f); f=powf(f, 2.0f); 	// should have to only use 4 vars for 4 numbers, but here we are.
	printf("%f/n", sqrt(e+f));	// dumbass output
	return 0;	// exit.
}
int printHelp() {
  printf("usage: distance [-h] [1] [2] [3] [4]"); // howto format help?
}
