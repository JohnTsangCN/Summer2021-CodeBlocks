/*
Date:2021-08-14
Author:John Tsang
Remark:加密信息，将字母转换成其后的第3个字母，非字母字符不变。
*/
#include<iostream>
using namespace std;
int main()
{
  char let;
  while(true)
  {
    cin>>let;
    if((let>='a'&&let<'x')||(let>='A'&&let<'X'))
        let=let+3;
    else if(let>='x'&&let<='z')
        let=let-'x' + 'a';
    else if(let>='X'&&let<='Z')
        let=let-'X' + 'A';
    else
        let=let;
    cout<<let;
  }
  return 0;
}
