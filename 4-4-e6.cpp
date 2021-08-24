/*
Date:2021-08-24
Author:John Tsang
Remark:给定一个正整数n，求数根。
*/
#include<iostream>
using namespace std;
int main()
{
    int sum1,sum2,digit,root,n;
    sum1 = sum2 = digit = root = n = 0;
    cin >> n;
    do
    {
        digit = n % 10;
        n = n / 10;
        sum1 = sum1 + digit;
    }
    while(n >= 1);
    if(sum1 < 10)
        cout << sum1;
    else
    {
        while(sum1 >= 1)
        {
            root = sum1 % 10;
            sum1 = sum1 / 10;
            sum2 = sum2 + root;
        }
        cout << sum2;
    }
    return 0;
}
