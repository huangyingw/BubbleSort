// BubbleSort.cpp :
#include "stdafx.h"
#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

#define Max 100    

typedef struct
{         
    int key;
}RecType;

typedef RecType SeqList[Max+1];
int n;
int count=0;
typedef enum{FALSE,TRUE} Boolean;

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
    cout<<"Please input count"<<endl;
	cin>>n;
	cout<<"Please input "<<n<<", data"<<endl;
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
	R[1].key=1;
	R[2].key=2;
	R[3].key=3;
	R[4].key=4;
	R[5].key=5;

	BubbleSort(R);
	cout<<"count number:"<<count<<endl;
	cout<<"Sort reult:"<<endl;
    output_int(R);
}
