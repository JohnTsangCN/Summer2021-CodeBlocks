/*
Author: John Tsang
Date: 2021-08-27
Remark:输入两个正整数x0, y0, 找出满足以下条件的p,q的个数
       a) p,q是正整数
       b) p,q以x0为最大公约数，以y0为最小公倍数
*/
#include<iostream>
using namespace std;
int main()
{
    int x0,y0,biggest,smallest,sum,p,q,a,r,flag;
    x0 = y0 = biggest = sum = smallest = p = q = a = r = flag = 0;
    cin >> x0 >> y0;
    if(x0 <=0 || y0 <=0 )
    {
        cout << "positive number needed." << endl;
        return -1;
    }
    for(p = x0; p <= y0 && flag == 0; p += x0)
    {
        for(q = x0; q <= y0 && flag == 0; q += x0)
        {
            a = p;
            biggest = q;
            while(r = a % biggest)
            {
                a = biggest;
                biggest = r;
            }
            smallest = p * q / biggest;
            if(biggest == x0 && smallest == y0)
            {
                if (p < q)
                {
                    sum = sum + 2;
                    //cout << p << " " << q << endl;
                    //cout << q << " "  << p << endl;
                }
                else
                    flag = 1;
            }
        }
    }
    cout << sum;
    return 0;
}
