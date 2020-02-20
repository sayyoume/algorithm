#pragma once
#include "common.h"

int hashValue(string str) { // ��ϣ����
	int value = 0;
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		value += str[i] - 'a'; // �������е��ַ�����СдӢ����ĸ
	}
	return value;
}

//����Ϊm�������������ɳ���Ϊn��   m-n+1���ִ�  

bool rk_search(string main, string target) {
	int m = main.length();
	int n = target.length();
	int len = m - n + 1;
	int targetHash = hashValue(target);
	string subMain;
	for (int i =0;i<len;i++)
	{
		subMain = "";
		 subMain = main.substr(i,  n);
		 if (hashValue(subMain) == targetHash && subMain == target) {
			 return true;
		 }
	}
	return false;
}

