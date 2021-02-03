#pragma once
#include <vector>

using namespace std;

void eraseItem() {
	//循环中删除
	vector<int> vec = { 1,2,3,4,5 };
	vector<int>::iterator it = vec.begin();
	//第二种方式
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

	//第二种方式
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