#include "resetDataset.h"
#include "selectionSortArray.h"
#include "insertionSortArray.h"
#include <stdio.h>
#include <time.h>

#define DATA_SIZE 10

int main() {
	
	int data[DATA_SIZE];
	
	srand(time(NULL));

	resetDataset(data, DATA_SIZE, RANDOM);
	printf("before selection sort (array ver) :");
	for(int i = 0; i < DATA_SIZE; i++) printf(" %d", data[i]);
	printf("\n\n");

	selectionSortArray(data, DATA_SIZE);

	printf("after selection sort (array ver) :");
	for(int i = 0; i < DATA_SIZE; i++) printf(" %d", data[i]);
	printf("\n\n");


	resetDataset(data, DATA_SIZE, RANDOM);
	printf("before insertion sort (array ver) :");
	for(int i = 0; i < DATA_SIZE; i++) printf(" %d", data[i]);
	printf("\n\n");

	insertionSortArray(data, DATA_SIZE);

	printf("after insertion sort (array ver) :");
	for(int i = 0; i < DATA_SIZE; i++) printf(" %d", data[i]);
	printf("\n\n");

}