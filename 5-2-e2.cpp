/*
Author: John Tsang
Date: 2021-08-31
Remark:山上有10个洞，把洞按1到10编号。狐狸从10号洞出发，每一次都多隔一个洞来找兔子（第一次隔0个洞，第二次隔1个洞……），但进了1000次洞也没有找着，问兔子躲在几号洞？
*/
#include<iostream>
using namespace std;
int main()
{
    int a[11] = {},i,hole = 0;
    for(i = 1; i <= 1000; i++)
    {
        hole = hole + i;
        while(hole > 10)
            hole = hole - 10;
        if(hole <= 10)
        {
            cout << hole << " ";
            a[hole]++;
        }
    }
    for(i = 1; i <= 10; i++)
        if(a[i] == 0)
            cout <<  endl << "The hole's number is " << i;
    return 0;
}
