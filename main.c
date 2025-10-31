#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// distance v0 - kaispishock

int main(int argc, char * argv[]) {
	if (argv[1]="-h","--help") {
		printHelp();
		return 0;
	} else if (argc=4) {
		float x1 x2 y1 y2;
		x1=stof(argv[1]);
		x2=stof(argv[2]);
		y1=stof(argv[3]);
		y2=stof(argv[4]);
		distCalc(x2,x1,y2,y1);
		return 0;
	} else {
		printf("Invalid number of arguments (exit code 1)/n");
		return 1;
	}
}
int distCalc(float a b c d) {
	float e=a-b; float f=c-d;
	e=e^2; f=f^2;
	printf("sqr of: %f/n", e+f);
	printf("eg. %f/n", sqrt(e+f));
	return 0;
}
// TODO: implement printHelp function
	
