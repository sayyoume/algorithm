#pragma once
#include "common.h"

//ѡ������ ��ѡ�������һ��Ԫ�أ�������һ���ߵĺ͵�һ��Ԫ�رȽϣ�
//��һ���ҳ���С��Ԫ�أ��͵�һ��Ԫ�ؽ���
//�ڶ��飬�ҳ���С��Ԫ�أ��͵ڶ���Ԫ�ؽ������Դ����ơ�����

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
