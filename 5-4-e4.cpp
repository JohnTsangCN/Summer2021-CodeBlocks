/*
Author: John Tsang
Date: 2021-10-05
Remark:将两行字符进行逐个字符的比较，把相同的位置找出来并输出。
*/
#include<iostream>
using namespace std;
int main()
{
    char first[201],second[201];
    int i = 1,s = 1,k = 0;
    while((first[i] = getchar()) != '\n')
        i++;
    while((second[s] = getchar()) != '\n')
        s++;
    k = (s > i) ? s : i;
    for(int n = 1; n < k; n++)
    {
        if (first[n] == second[n])
            cout << n << " ";
    }
    return 0;
}

