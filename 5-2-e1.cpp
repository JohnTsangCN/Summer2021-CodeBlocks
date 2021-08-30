/*
Author: John Tsang
Date: 2021-08-29
Remark:输入n个数，将最小数放到数组的第一个位置，其余元素顺序不变。
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,index = -1;
    float a[200] = {},x;
    cin >> n;
    if(n <= 0)
    {
        cout << "False!";
        return -10000;
    }
    for(i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
        if(index == -1)
            index = 0;
        if(a[i] < a[index])
            index = i;
    }
    x = a[index];
    for(i = index; i >= 1; i--)
        a[i] = a[i - 1];
    a[0] = x;
    //for(i = 0; i <= n - 1; i++)
        //cout << a[i] << " ";
    return 0;
}
