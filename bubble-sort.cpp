//============================================================================
// Name        : bubble-sort.cpp
// Author      : Daniel Jaeger
// Date        : 9/20/16
// Copyright   : 
// Description : Implementation of bubble sort in C++
//============================================================================

#include "sort.h"

void 
BubbleSort::sort(int A[], int size)			// main entry point
{
	for (int k = 1; k < size; k++) {   //
		bool cor = false;
		for (int j = 0; j < size - k; j++)
		if (A[j+1] < A[j]) {
			int tmp = A[j]; // swap elemets
			A[j] = A[j+1];
			A[j+1] = tmp;
			cor = true;
		}
		if (!cor) break; // stop sorting
	}
}
