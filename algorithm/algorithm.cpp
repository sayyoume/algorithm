// algorithm.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <cstdio>
#include <cstring>
#include <algorithm>
#include "选择排序.h"

using namespace std;

#define maxn 3500
#define M 13000

int dp[M]; //dp[j]表示当前已放入容量为j背包获得的最大价值
int w[maxn], v[maxn]; //w[i]表示第i个物品的重量，v[i]表示第i个物品的价格
int n, m; //n个物品,m背包容量

//void knapsack(int n, int w) {
//	for (int i = 1; i <= n; i++) {
//		for (int j = w; j >= w[i]; j--) {
//			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
//		}
//	}
//}

/*
 n物品  m容量
  4		  6

 重量  期望值
  1		 4
  2		 6
  3		 12
  2		 7
 out
 23

*/
int main() {

	selectsort();

	return 0;
	/*scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &w[i], &v[i]);
	}*/
	//memset(dp, 0, sizeof(dp));
	//knapsack(n, m);
	//printf("%d\n", dp[m]);
	return 0;
}



////================
