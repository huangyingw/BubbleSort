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

void BubbleSort(int *R, int len) 
{
  int i,j,exchange=0;
  for(i=len;i>1;--i)
  {
    for(j=1;j<i;--j)
    {
      count++;
      if(R[j-1]>R[j])
      {
        exchange=1;
        R[j-1]^=R[j];
        R[j]^=R[j-1];
        R[j-1]^=R[j];
      }
    }
    if(exchange==0)
      break;
  }
}

void output_int(int *R,int len) 
{
  int i;
  for(i=0;i<len;++i)
    cout<<R[i]<<endl;
}

int main() 
{
  int i;
  int *R=new int[5];

  R[1]=1;
  R[2]=2;
  R[3]=5;
  R[4]=4;
  R[0]=3;

  BubbleSort(R,5);
  cout<<"count number:"<<count<<endl;
  cout<<"Sort reult:"<<endl;
  output_int(R,5);
  return 0;
}
