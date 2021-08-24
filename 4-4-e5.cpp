/*
Date:2021-08-24
Author:John Tsang
Remark:给定一个整百元n，兑换成10元、20元、50元小钞票形式。输出兑换方案总数。
*/
#include<iostream>
using namespace std;
int main()
{
    int n,y_10,y_20,y_50,sum;
    sum = 0;
    cin >> n;
    if(n % 100 == 0)
    {
        for(y_10 = 0; y_10 <= n / 10; y_10++)
            for(y_20 = 0; y_20 <= n / 20; y_20++)
                for(y_50 = 0; y_50 <= n / 50; y_50++)
                    if(10 * y_10 + 20 * y_20 + 50 * y_50 == n)
                    {
                        //cout << "y_10 = " << y_10 << "  y_20 = " << y_20 << "  y_50 = " << y_50 << endl;
                        sum = sum + 1;
                    }
        cout << sum;
    }
    return 0;
}
