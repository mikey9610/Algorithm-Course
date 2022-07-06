#include "insertionSortArray.h"

void insertionSortArray(int data[], int size) {

	int f = -1; //data의 마지막 인덱스.
	int j; // 새로 data가 들어갈 인덱스. 그 이후의 data를 밀어낸다. 
	int num;
	int tmp;
	//.5 2 4 3 1
	//5. 2 4 3 1
	//
	for (int i = 0; i < size; i++)
	{
		num = data[i];
		j = 0;
		while (j < i && num > data[j])
			j++;
		for (int k = f + 1; k > j; k--)
		{
			tmp = data[k];
			data[k] = data[k - 1];
		}
			data[j] = num;
		f++;
	}

}