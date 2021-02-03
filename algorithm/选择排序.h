#pragma once
#include "common.h"

//选择排序 先选出数组第一个元素，遍历第一遍后边的和第一个元素比较，
//第一遍找出最小的元素，和第一个元素交换
//第二遍，找出最小的元素，和第二个元素交换，以此类推。。。

void selectsort() {
	int nLen = 5;
	int a[5] = { 2,1,3,7,4 };
	
	for (int i = 0; i < nLen; i++)
	{
		cout << a[i] << ",";
	}
	cout << endl;

	
	for (int i = 0; i < nLen; i++) {
		int min = i;
		for (int j = i+1;j< nLen;j++)
		{
			if (a[j] < a[i]) {
				min = j;
			}
		}
		int tmp = a[min];
		a[min] = a[i];
		a[i] = tmp;
	}

	for (int i=0;i <nLen;i++)
	{
		cout << a[i]<<",";
	}
}
