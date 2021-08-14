/*
Date:2021-08-13
Author:John Tsang
Remark:判断两个数字是否互质。
*/

#include<iostream>
using namespace std;
int isPrimer()
{
    int m,n,q,r,x;
    cin>>m>>n;
    if(m<0||n<0)
        cout<<"False!"<<endl;
    else
    {
        while(r!=0)
        {
            r=m%n;
            x=n;
            m=n;
            n=r;
        }
        if(x>1)
           cout<<"Yes!"<<endl;
        else
           cout<<"No!"<<endl;
    }
    return 0;
}
