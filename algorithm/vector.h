#pragma once
#include <vector>

using namespace std;

void eraseItem() {
	//ѭ����ɾ��
	vector<int> vec = { 1,2,3,4,5 };
	vector<int>::iterator it = vec.begin();
	//�ڶ��ַ�ʽ
	while (it != vec.end())
	{
		int n = *it;
		if (*it == 2 || *it == 3)
		{
			it = vec.erase(it);
		}
		else {
			it++;
		}
	}

	//�ڶ��ַ�ʽ
	for (it = vec.begin(); it != vec.end();)
	{
		if (*it == 2)
		{
			it = vec.erase(it);
		}
		else {
			it++;
		}
	}

}