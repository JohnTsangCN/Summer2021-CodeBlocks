/*
Author: John Tsang
Date: 2021-10-13
Remark:给定一个正整数，将它用2的幂次方表示出来。
*/
#include<iostream>
using namespace std;
void mi(int x)
{
    int n = 1,sum = 0;
    while(n <= x)
    {
        if(n == x)
        {
            cout << "2(" << sum << ")";
            break;
        }
        n *= 2;
        sum++;
        if(n * 2 > x && n != x)
        {
            x = x - n;
            cout << "2(" << sum << ")+";
            mi(x);
        }
    }
}
int main()
{
    int x;
    cin >> x;
    mi(x);
    return 0;
}
