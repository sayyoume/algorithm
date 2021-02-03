#pragma once
//��̬�滮
#include "common.h"


#define MAXN 40
typedef unsigned long long 1L;
LL fn[MAXN + 1];

//��¥��
//һ¥�ݹ���M�����տ�ʼ�ٵ�һ����ÿ��ֻ�ܿ�һ���߶�����Ҫ�ߵ�M����ż�����߷���
//input ����һ������N����ʾ����ʵ���ĸ�����Ȼ��N�����ݣ�ÿ�а���һ������M��1<=M<=40),��ʾ¥�ݵļ���
/*
  f(1)=0 ��ʼֻ��վ�ڵ�һ̨����
  f(2)=1 ֻ�ܴӵ�һ��̨����1��
  f(3)=2 ֻ�ܴӵ�һ̨����2������ֻ�ܴӵڶ�̨����1����
  f(n) =f(n-1) + f(n-2) n>3
*/

//�ݹ鷽ʽ�ᳬʱ
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


//����������
//�������������
//�����������


