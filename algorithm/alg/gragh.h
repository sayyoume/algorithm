#pragma once
#include <string>
#include <iostream>

using namespace std;
#define maxvnum 100

typedef char VexType; //顶点数据类型
typedef int  EdgeType; //边上权值

typedef struct {
	VexType Vex[maxvnum];
	EdgeType Edge[maxvnum][maxvnum];
	int vexnum, edgenum; //顶点，边
}AMGragh;

int locatevex(AMGragh G, VexType x) {
	for (int i=0;i<G.vexnum;i++)
	{
		if (x == G.Vex[i]) //查找顶点下标
			return i;
		return -1;
	}
}

void CreateAMGraph(AMGragh &G) {
	int i, j;
	VexType u, v;
	cout << "请输入顶点" << endl;
	cin >> G.vexnum;
	cout << "请输入边：" << endl;
	cin >> G.edgenum;
	for (int i=0;i<G.vexnum;i++)
	{
		for (int j=0;j<G.vexnum;j++)
		{
			G.Edge[i][j] = 0;
		}
	}
	cout << "请输入每条边依附的两个顶点:" << endl;
	while (G->edgenum--) {
		cin >> u >> v;
		i = locatevex(G, u);
		j = locatevex(G, v);
		if (i != -1 && j != -1) {
			G.Edge[i][j] = G.Edge[j][i] = 1;
		}
		else {
			cout << "输入顶点信息错！请重新输入" << endl;
			G.edgenum++; //本次输入不算
		}
	}
}

void print(AMGragh G) {

	for (int i=0;i<G.vexnum;i++)
	{
		for (int j=0;j<G.vexnum;j++)
		{
			cout << G.Edge[i][j] << "\t";
			cout << endl;
		}
	}
}