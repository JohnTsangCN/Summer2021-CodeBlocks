/*
Author: John Tsang
Date: 2021-08-19
Remark:George:角谷猜想。对于给定的正整数n，当它为偶数时，将它变成n/2，当它为奇数时，就将它变成3n+1,求出序列中第一次出现1的位置。
*/
#include<iostream>
using namespace std;
int main()
{
    int number,sum;
    number = sum = 0;
    cin >> number;
    if(number <= 0)
        cout << "False!" << endl;
    else
    {
        cout << number << "  ";
        do
        {
            if(number % 2 == 0)
                number = number / 2;
            else
                number = 3*number + 1;
            sum = sum + 1;
            cout << number << "  ";
        }
        while(number != 1);
        cout << endl << sum + 1 ;
    }
    return 0;
}
