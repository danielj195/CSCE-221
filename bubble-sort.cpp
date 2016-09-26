//============================================================================
// Name        : bubble-sort.cpp
// Author      : Daniel Jaeger
// Date        : 9/20/16
// Copyright   : 
// Description : Implementation of bubble sort in C++
//============================================================================

#include "sort.h"

void BubbleSort::sort(int A[], int size)			// main entry point
{
	bool cor = true;
	int j = 0;
	int tmp;
	while (cor) {
		cor = false;
		j++;
		for (int i = 0; i < size - j; i++) {
			num_cmps++;
			if (A[i] > A[i + 1]) {
				tmp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = tmp;
				cor = true;
			}
		}
	}
}