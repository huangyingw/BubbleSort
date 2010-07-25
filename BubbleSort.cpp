// BubbleSort.cpp : 定义控制台应用程序的入口点。
#include "stdafx.h"
#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

#define Max 100         //假设文件长度

typedef struct
{         //定义记录类型
    int key;            //关键字项
}RecType;

typedef RecType SeqList[Max+1]; //SeqList为顺序表，表中第0个元素作为哨兵
int n;                 //顺序表实际的长度
int count=0;
typedef enum{FALSE,TRUE} Boolean;  //FALSE为0，TRUE为1

void BubbleSort(SeqList R) 
{
	int i,j,exchange=0;
	for(i=1;i<n;i++)
	{
		for(j=n;j>i;j--)
		{
			count++;
			if(R[j-1].key>R[j].key)
			{
				exchange=1;
				R[0]=R[j];
				R[j]=R[j-1];
				R[j-1]=R[0];
			}
		}
		if(exchange==0)
			break;
	}
}

void input_int(SeqList R) 
{  
    int i;
    cout<<"请输入数据个数"<<endl;
	cin>>n;
	cout<<"请依次输入"<<n<<"个数据"<<endl;
    for(i=1;i<=n;i++)
		cin>>R[i].key;
}

void output_int(SeqList R) 
{
    int i;
    for(i=1;i<=n;i++)
		cout<<R[i].key<<endl;
}

void main() 
{
    int i;
    SeqList R;

	n=5;
	R[1].key=3;
	R[2].key=2;
	R[3].key=1;
	R[4].key=4;
	R[5].key=5;

	BubbleSort(R);
	cout<<"count number:"<<count<<endl;
	cout<<"Sort reult:"<<endl;
    output_int(R);
}
