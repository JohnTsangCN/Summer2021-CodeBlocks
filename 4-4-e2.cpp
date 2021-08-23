/*
Date:2021-08-23
Author:John Tsang
Remark:输入一个正整数n，输出高为n的由*组成的等腰三角形。
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    n = i = j = k = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1;j <= n - i;j++)
            cout << " ";
        for(k = 1;k <= 2 * i - 1;k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
