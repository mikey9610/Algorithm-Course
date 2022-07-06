#include "selectionSortArray.h"
#include "insertionSortArray.h"
#include <stdio.h>

#define DATA_SZIE 10

int main() {
	
	int data[DATA_SZIE]={5,1,9,2,6,7,3,8,0,4};

	printf("before selection sort (array ver) :");
	for(int i = 0; i < DATA_SZIE; i++) printf(" %d", data[i]);
	printf("\n\n");

	selectionSortArray(data, DATA_SZIE);

	printf("after selection sort (array ver) :");
	for(int i = 0; i < DATA_SZIE; i++) printf(" %d", data[i]);
	printf("\n\n");

	


	printf("before insertion sort (array ver) :");
	for(int i = 0; i < DATA_SZIE; i++) printf(" %d", data[i]);
	printf("\n\n");

	insertionSortArray(data, DATA_SZIE);

	printf("after insertion sort (array ver) :");
	for(int i = 0; i < DATA_SZIE; i++) printf(" %d", data[i]);
	printf("\n\n");

}