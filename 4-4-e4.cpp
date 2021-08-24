/*
Date:2021-08-24
Author:John Tsang
Remark:给定一个正整数n，输出乘法口诀表的前n行。
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;
    for(i = 1;i <= n;i++)
    {
        for(j = 1;j <= i;j++)
            cout << j << "*" << i << "=" << j * i << "  ";
        cout << endl;
    }
    return 0;
}
