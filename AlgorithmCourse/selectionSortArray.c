#include "selectionSortArray.h"

void selectionSortArray(int data[], int size) {

	// write code here
	int f = -1;
	int min;
	int min_idx;
	int tmp;
	
	min_idx = 0;
	while(f < size - 1) {
		min_idx = 0;
		min = data[f + 1];
		for (int i = f + 1; i < size; i++)
		{
			if (data[i] <= min)
			{
				min = data[i];
				min_idx = i;
			}
		}
		f++;
		tmp = data[min_idx];
		data[min_idx] = data[f];
		data[f] = tmp;
	}

}