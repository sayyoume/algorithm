#pragma once
#include <string>
#include <iostream>

using namespace std;
#define maxvnum 100

typedef char VexType; //������������
typedef int  EdgeType; //����Ȩֵ

typedef struct {
	VexType Vex[maxvnum];
	EdgeType Edge[maxvnum][maxvnum];
	int vexnum, edgenum; //���㣬��
}AMGragh;

int locatevex(AMGragh G, VexType x) {
	for (int i=0;i<G.vexnum;i++)
	{
		if (x == G.Vex[i]) //���Ҷ����±�
			return i;
		return -1;
	}
}

void CreateAMGraph(AMGragh &G) {
	int i, j;
	VexType u, v;
	cout << "�����붥��" << endl;
	cin >> G.vexnum;
	cout << "������ߣ�" << endl;
	cin >> G.edgenum;
	for (int i=0;i<G.vexnum;i++)
	{
		for (int j=0;j<G.vexnum;j++)
		{
			G.Edge[i][j] = 0;
		}
	}
	cout << "������ÿ������������������:" << endl;
	while (G->edgenum--) {
		cin >> u >> v;
		i = locatevex(G, u);
		j = locatevex(G, v);
		if (i != -1 && j != -1) {
			G.Edge[i][j] = G.Edge[j][i] = 1;
		}
		else {
			cout << "���붥����Ϣ������������" << endl;
			G.edgenum++; //�������벻��
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