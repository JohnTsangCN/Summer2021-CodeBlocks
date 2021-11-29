/*
Author: John Tsang
Date: 2021-11-29
Remark:统计A-Z字符出现频率，并以*绘制统计图
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    // 声明字符数组：长度4， 结果数组：26
    string s[4];
    int a[26] = {};
    int biggest;

    // 输入4行字符
    for(int i = 0; i < 4; i++)
        getline(cin,s[i]);

    // 遍历每行字符，计算每个字符出现的次数
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < s[i].size(); j++)
            a[s[i][j] - 'A']++;

    //找出现次数最多的字符以确定行数
    biggest = a[0];
    for(int i = 1; i < 26; i++)
        if(a[i] > biggest)
            biggest = a[i];

    //一行行地打印输出*
    for(int i = biggest; i > 0; i--)
    {
        for(int j = 0; j < 26; j++)
        {
            if(a[j] >= i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // 输出26个字母
    for(int i = 0;i < 26;i++)
        cout << char('A' + i) << " ";
    return 0;
}
