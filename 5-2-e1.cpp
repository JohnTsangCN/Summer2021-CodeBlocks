/*
Author: John Tsang
Date: 2021-08-29
Remark:输入n个数，将最小数放到数组的第一个位置，其余元素顺序不变。
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    float a[n + 1],smallest;
    smallest = 0;
    for(i = 1; i <= n; i++)
        cin >> a[i];
    smallest = a[1];
    for(i = 2; i <= n; i++)
    {
        if(a[i] < smallest)
            smallest = a[i];
    }
    cout << smallest;
    for(i = 1; i <= n; i++)
    {
        if(a[i] == smallest)
            continue;
        cout << " " << a[i];
    }
    return 0;
}
