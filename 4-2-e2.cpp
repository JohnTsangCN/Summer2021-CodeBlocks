/*
Date:2021-08-13
Author:John Tsang
Remark:计算一个数字的各个数位上的数字的和。
*/

#include<iostream>

using namespace std;
int sumDigit()
{
  int n,num,sum;
  sum=0;
  cin>>n;
  while(n>=1)
  {
      num=n%10;
      sum=sum+num;
      n=n/10;
  }
  cout<<"The number:"<<sum<<endl;
  return 0;
}
