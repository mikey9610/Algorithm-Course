#include "insertionSortArray.h"

void insertionSortArray(int data[], int size) {

	int f = -1; //data�� ������ �ε���.
	int j; // ���� data�� �� �ε���. �� ������ data�� �о��. 
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