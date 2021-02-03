#pragma once
#include "common.h"

//分治排序，分而治之

void mymerge(int a[], int low, int mid, int high) {

	int *tmp = new int[high -low +1];
	int i = low, j = mid + 1,k=0;
	
	while (i<=mid && j <= high)
	{
		if (a[i] <= a[j])
			tmp[k++] = a[i++];
		else
			tmp[k++] = a[j++];
	}

	while (i <= mid) tmp[k++] = a[i++];
	while (j <= high) tmp[k++] = a[j++];
	for (i=low,k=0;i<=high;i++)
	{
		a[i] = tmp[k++];
	}
	delete []tmp;

}

void MergeSort1(int a[], int low, int high) {
	if (low <high)
	{
		int mid = (low + high) / 2;
		MergeSort1(a, low, mid);
		MergeSort1(a, mid + 1, high);
		mymerge(a, low, mid, high);
	}
}
