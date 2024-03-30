#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE (1 << 30) // Maximum size of 2^30

extern double dotProduct(double vectorA[], double vectorB[], int size);

int main() {
	srand(time(NULL));
	double sdot = 0.0;
	int vectorSize = MAX_SIZE;

	double* vectorA = (double*)malloc(vectorSize * sizeof(double));
	double* vectorB = (double*)malloc(vectorSize * sizeof(double));

	for (int i = 0; i < vectorSize; i++) {
		vectorA[i] = (double)rand() / 3;
		vectorB[i] = (double)rand() / 3;
	}


	sdot = dotProduct(vectorA, vectorB, vectorSize);
	
	printf("The dot product of these two vectors are: %lf", sdot);


	return 0;
}