#include "linkedlist_ver.h"
#include "resetDataset.h"
#include "selectionSortArray.h"
#include "insertionSortArray.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


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


	//연결리스트
	resetDataset(data, DATA_SIZE, RANDOM);
	printf("before selection sort (linkedlist ver) :");
	for (int i = 0; i < DATA_SIZE; i++) printf(" %d", data[i]);

	selectionSortList(data, DATA_SIZE);

	printf("0\n");
	printf("after selection sort (linkedlist ver) :");
	for (int i = 0; i < DATA_SIZE; i++) printf(" %d", data[i]);
	printf("\n\n");


	resetDataset(data, DATA_SIZE, RANDOM);
	printf("before insertion sort (linkedlist ver) :");
	for (int i = 0; i < DATA_SIZE; i++) printf(" %d", data[i]);
	printf("\n\n");

	insertionSortList(data, DATA_SIZE);
	printf("after insertion sort (linkedlist ver) :");
	for (int i = 0; i < DATA_SIZE; i++) printf(" %d", data[i]);
	printf("\n\n");
}