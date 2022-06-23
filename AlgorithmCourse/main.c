#include "myFirstSortFunc.h"
#include <stdio.h>

#define DATA_SZIE 10

int main() {
	
	int data[DATA_SZIE]={5,1,9,2,6,7,3,8,0,4};

	printf("before sorting :");
	for(int i = 0; i < DATA_SZIE; i++) printf(" %d", data[i]);
	printf("\n\n");

	myFirstSortFunc(data, DATA_SZIE);

	printf("after sorting :");
	for(int i = 0; i < DATA_SZIE; i++) printf(" %d", data[i]);
	printf("\n\n");

}