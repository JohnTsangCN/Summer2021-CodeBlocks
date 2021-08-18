/*
Date:2021-08-17
Author:John Tsang
Remark:给定一个整数，将该数各个数位上的数字反转得到一个新数。
*/
#include<iostream>
using namespace std;
int main()
{
    int digit,number,sum;
    digit = number = sum = 0;
    cin >> number;
    if(number > 0)
        do
    {
       digit = number % 10;
       number = number / 10;
       sum = sum + digit;
       if(number >= 1)
            sum = sum * 10;
    }
    while(number >= 1);
    else if(number == 0)
        sum = 0;
    else if(number < 0)
         do
    {
       digit = number % 10;
       number = number / 10;
       sum = sum + digit;
       if(number <= -1)
            sum = sum * 10;
    }
    while(number <= -1);
    cout << sum << endl;
    return 0;
}

