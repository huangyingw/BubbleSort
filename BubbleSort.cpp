#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

#define Max 100         //�����ļ�����

typedef struct
{         //�����¼����
  int key;            //�ؼ�����
}RecType;

typedef RecType SeqList[Max+1]; //SeqListΪ˳������е�0��Ԫ����Ϊ�ڱ�
int n;                 //˳���ʵ�ʵĳ���
int count=0;
typedef enum{FALSE,TRUE} Boolean;  //FALSEΪ0��TRUEΪ1

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
        R[j-1].key^=R[j].key;
        R[j].key^=R[j-1].key;
        R[j-1].key^=R[j].key;
      }
    }
    if(exchange==0)
      break;
  }
}

void output_int(SeqList R) 
{
  int i;
  for(i=1;i<=n;i++)
    cout<<R[i].key<<endl;
}

int main() 
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
  return 0;
}
