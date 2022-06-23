#include "myFirstSortFunc.h"

void myFirstSortFunc(int data[], int size) {

	// SAMPLE CODE

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size - i - 1; j++) {
			int tmp;
			if(data[j] > data[j + 1]) {
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}	
	}
}