/*
Author: John Tsang
Date: 2021-10-10
Remark:输入一个正整数，求数根。
*/
#include<iostream>
using namespace std;
int number_root(long long x)
{
    int sum = 0,n = 0;
    while(x >= 1)
    {
        sum = sum + x % 10;
        x = x / 10;
    }
    n = sum;
    return (n >= 10) ? number_root(n) : n;
}
int main()
{
    long long x;
    cin >> x;
    cout << number_root(x);
    return 0;
}
