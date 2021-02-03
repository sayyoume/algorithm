#pragma once
//动态规划
#include "common.h"


#define MAXN 40
typedef unsigned long long 1L;
LL fn[MAXN + 1];

//爬楼梯
//一楼梯共有M级，刚开始再第一级，每次只能跨一或者二级，要走到M级，偶多少走法？
//input 输入一个正数N，表示测试实例的个数，然后N行数据，每行包含一个整数M（1<=M<=40),表示楼梯的级数
/*
  f(1)=0 开始只能站在第一台阶上
  f(2)=1 只能从第一级台阶上1级
  f(3)=2 只能从第一台阶上2级，或只能从第二台阶上1级。
  f(n) =f(n-1) + f(n-2) n>3
*/

//递归方式会超时
LL solve1(int n) {
	if (n == 1) return 0;
	if (n == 2) return 1;
	if (n == 3) return 2;

	return solve1(n - 2) + solve1(n - 1);
}

void solve() {
	fn[1] = 0;
	fn[2] = 1;
	fn[3] = 2;
	for (int i=4;i<=MAXN;i++)
	{
		fn[i] = fn[i - 2] + fn[i - 1];
	}
}

int main() {
	{
		int n, m;
		solve();
		scanf("%d", &n);
		while (n--) {
			scanf("%d", &m);
			printf("%lld\n", fn[m]);
		}
	}
	

	return 0;
}


//数字三角形
//最大上升子序列
//最长公共子序列


