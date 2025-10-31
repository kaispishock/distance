#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// distance v0 - kaispishock

// function prototypes
float distCalc(float a, float b, float c, float d);

// main function - handles the arguments
int main(int argc, char * argv[]) {
	if (argv[1]="-h","--help") {	//at least the user admits they're dumb.
		printHelp(); // tell 'em how to do shit.
		return 0; // nicely exit, because the user actualy asked for help instead of just failing miseribly.
	} else if (argc=4) {	// not printing help, time to actualy do work.
		float x1,x2,y1,y2;	// make the vars.
		x1=atof(argv[1]);	// convert the args from stings into floats so we can use them as arguments for the distcalc func.
		x2=atof(argv[2]);
		y1=atof(argv[3]);
		y2=atof(argv[4]);
		distCalc(x2,x1,y2,y1);	// actualy invoke the function
		return 0;	// gtfo
	} else {	// dumbass.
		printf("Invalid number of arguments (exit code 1)/n"); // tell the user they are dumb.
		printHelp(); // tell the user how to do shit
		return 1; // exit with an error code of 1, as a metaphorical slap on the ass.
	}
}
float distCalc(float a, float b, float c, float d) { // actualy calculate the distance
	float e=a-b; float f=c-d;			// incredibly cringe solution.
	e=powf(e, 2.0f); f=powf(f, 2.0f); 	// should have to only use 4 vars for 4 numbers, but here we are.
	printf("%f/n", sqrt(e+f));	// dumbass output
	return 0;	// finaly exit.
}
int printHelp() {
  printf("usage: distance [-h] [1] [2] [3] [4]"); // howto format help?
}
