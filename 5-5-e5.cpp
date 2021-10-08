/*
Author: John Tsang
Date: 2021-10-08
Remark:给定一个5*5的矩阵，找鞍点。
*/
#include<iostream>
using namespace std;
int main()
{
    int biggest,smallest,a[5][5];
    int flag = 0,i,j,n,m,x;
    for(i = 0; i < 5; i++)
        for( j = 0; j < 5; j++)
            cin >> a[i][j];
    for(i = 0; i < 5; i++)
    {
        biggest = a[i][0];
        n = i,m = 0;
        for(j = 0; j < 5; j++)
        {
            if(a[i][j] > biggest)
            {
                biggest = a[i][j];
                n = i,m = j;
            }
        }
        smallest = a[0][m];
        for(x = 0; x < 5; x++)
        {
            if(a[x][m] < smallest)
                smallest = a[x][m];
        }
        if(biggest == smallest)
        {
            cout << n + 1 << " "<< m + 1 << " "<< biggest;
            flag++;
        }
    }
    if(flag == 0)
        cout << "not found";
    return 0;
}
