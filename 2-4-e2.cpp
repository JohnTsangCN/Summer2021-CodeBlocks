#include<iostream>
#include<string>
using namespace std;
int main()
{
    char letter;
    string s;
    int i,x;
    getline(cin,s);
    for(letter = 'A'; letter <= 'Z'; char(letter++))
    {
        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == string(letter))
                x++;
        }
        x = 0;
    }
    return 0;
}
