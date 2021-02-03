#pragma once

#include <iostream>
#include <algorithm>

#define N 4
#define W 6
using namespace std;


int c[N][W] = { 0 }; //二维数组解法
int dp[W] = { 0 };	 //一维数组解法
int w[5] = { 0,1,2,3,2 };
int v[5] = { 0,4,6,12,7 }; //w[i]表示第i个物品的重量，v[i]表示第i个物品的价值

//二维数组
void knapsack1() {
	for (int i=1;i<=W;i++)
	{
		for (int j=1;j<=N;j++)
		{
			if (j < w[i]) //放不进去
			{
				c[i][j] = c[i - 1][j];
			}
			else {
				c[i][j] = max(c[i - 1][j], c[i - 1][j - w[i]] + v[i]);
			}
		}
	}
	cout << c[N][W] << endl;
}

//一维数组
void knapsack2() {
	for (int i=1;i<=W;i++)
	{
		for (int j=W;j>=w[i];j--)
		{
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
		}
	}
	cout << dp[W] << endl;
}
