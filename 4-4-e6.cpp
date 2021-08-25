/*
Date:2021-08-24
Author:John Tsang
Remark:给定一个正整数n，求数根。
*/
#include<iostream>
using namespace std;
int main()
{
    int sum,n,digit;
    sum = n = digit = 0;
    cin >> n;
    while(n >= 1)
    {
        do
        {
            digit = n % 10;
            n = n / 10;
            sum = sum + digit;
        }
        while(n >= 1);
        if(sum >= 10)
        {
            n = sum;
            sum = 0;
        }
    }
    cout << sum;
    return 0;
}
