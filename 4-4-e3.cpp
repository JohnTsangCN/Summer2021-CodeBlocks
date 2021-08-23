/*
Date:2021-08-23
Author:John Tsang
Remark:输入一个正整数n，输出用1至（2n-1）的数字组成的菱形。
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,s,x;
    n = i = j = k = s = x = 0;
    cin >> n;
    for(i = 1;i <= 2 * n - 1;i++)
    {
        if(i <= n)
        {
            for(j = 1;j <= n - i;j++)
                cout << " ";
            for(s = 1;s <= 2 * i - 1;s++)
                cout << s;
        }
        else
        {
            for(k = 1;k <= i - n;k++)
                cout << " ";
            for(x = 1;x <= (2 * n - 1) - 2 * (i - n);x++)
                cout << x;
        }
        cout << endl;
    }
    return 0;
}
