#pragma once
#include "common.h"

int hashValue(string str) { // 哈希函数
	int value = 0;
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		value += str[i] - 'a'; // 假设所有的字符都是小写英文字母
	}
	return value;
}

//长度为m的主串，会生成长度为n的   m-n+1个字串  

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

