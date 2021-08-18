/*
Author: John Tsang
Date: 2021-08-18
Remark:给定一个整数，将该数各个数位上的数字反转得到一个新数。
*/
#include<iostream>
using namespace std;
int main()
{
    int number,digit,result;
    number = digit = result = 0;
    cin >> number;
    do
    {
        digit = number % 10;
        number = number / 10;
        result = result * 10 + digit;
    }
    while(number != 0);
    cout << result;
    return 0;
}
