#include <iostream>
using namespace std;

//�����㷨

void Merge(int A[], int low, int mid, int high)//�ϲ�����
{
    int *B=new int[high-low+1];//����һ����������
    int i=low, j=mid+1, k=0;
    while(i<=mid && j<=high) {//����С�����ŵ���������B[]��
        if(A[i]<=A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    while(i<=mid) B[k++]=A[i++];//��������ʣ�µ�Ԫ�ط���B��
    while(j<=high) B[k++]=A[j++];
    for(i=low, k=0; i<=high; i++)
        A[i]=B[k++];
    delete []B;//�ͷſռ�
}

void MergeSort(int A[], int low, int high)//�ϲ�����
{
    if(low<high)
    {
        int mid=(low+high)/2;//ȡ�е�
        MergeSort(A, low, mid);//��A[low:mid]�е�Ԫ�غϲ�����
        MergeSort(A, mid+1, high);//��A[mid+1:high]�е�Ԫ�غϲ�����
        Merge(A, low, mid, high);//�ϲ�
    }
}
//int main()
//{
    //int n, A[100];
    //cout<<"�����������е�Ԫ�ظ���nΪ��"<<endl;
    //cin>>n;
    //cout<<"���������������е�Ԫ�أ�"<<endl;
    //for(int i=0; i<n; i++)
    //   cin>>A[i];
    //MergeSort(A,0,n-1);
    //cout<<"�ϲ���������"<<endl;
    //for(int i=0;i<n;i++)
    //   cout<<A[i]<<" ";
    //cout<<endl;

//
//	int B[8] = { 42,15,20,6,8,38,66,45 };
//	MergeSort(B, 0, 7);
//	cout << "�ϲ���������" << endl;
//	for (int i = 0; i < 8; i++)
//		cout << B[i] << " ";
//	cout << endl;
//
//    return 0;
//}
