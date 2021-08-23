/*
Date:2021-08-23
Author:John Tsang
Remark:输入一个正整数n，输出用1至（2n-1）的数字组成的菱形。
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;
    for(i = 1; i <= 2 * n -1; i++)
    {
        for(j = 1; j <= abs(n - i); j++)
            cout << " ";
        for(k = 1; k <= (2 * n - 1) - 2 * (j - 1) ; k++)
            cout << k;
        cout << endl;
    }
}
