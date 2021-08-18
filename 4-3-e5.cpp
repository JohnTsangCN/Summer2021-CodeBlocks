/*
Author: John Tsang
Date: 2021-08-18
Remark:George Cantor证明有理数可枚举，根据输入的项输出该项的具体数字。
*/
#include<iostream>
using namespace std;
int main()
{
    int sum,n,x,m,d,j;
    sum = n = x = m = d = j = 0;
    cin >> x;
    if(x == 1)
        cout<< 1 <<"/"<< 1;
    else
    {
        // 计算所在行数
        do
        {
            sum = sum + 1;
            n = n + sum;
        }
        while((!(n <= x&&n + sum + 1 >= x )));

        // 计算属于某行的第几个
        m = sum + 1;
        j = m + 1;
        do
        {
            j = j - 1;
            d = d + 1;
            n = n + 1;
        }
        while(n != x);
        if(m % 2 == 0)
            cout << d << "/" << j;
        else
            cout << j << "/" << d;
    }
    return 0;
}
