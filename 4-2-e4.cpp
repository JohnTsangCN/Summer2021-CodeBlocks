/*
Date:2021-08-14
Author:John Tsang
Remark:给定一个范围，计算在这个范围中数字2出现的次数。
*/
#include<iostream>
using namespace std;
int count_digit2()
{
  int l,r,x,num,sum;
  cin>>l>>r;
  sum=0;
  if(l<1||r<1)
    cout<<"False"<<endl;
  else while(l<=r)
  {
      num=l;
      while(num>=1)
       {
        x=num%10;
        num=num/10;
        if(x==2)
        sum=sum+1;
       }
        l=l+1;
  }
  cout<<"The number:"<<sum<<endl;
  return 0;
}
