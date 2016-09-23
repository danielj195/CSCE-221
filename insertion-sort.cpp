//============================================================================
// Name        : insertion-sort.cpp
// Author      : Jacob Rodgers
// Date        : 9/19/16
// Copyright   : 
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void
InsertionSort::sort(int A[], int size){
	for (int k = 1; k < size; k++){
		int tmp = A[k];
		int j = k;
		for (; j > 0 && tmp < A[j - 1]; j--) {
			num_cmps++;
			A[j] = A[j - 1];
		}
		A[j] = tmp;
	}
}
