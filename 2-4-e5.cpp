#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,word,temp = "";
    int number = 0,first;
    cin >> word;
    getline(cin,s);
    getline(cin,s);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
            temp = "";
        else
            temp += s[i];
        if(temp == word && (s[i + 1] == ' ' || i == s.size() - 1))
        {
            number++;
            if(number == 1)
                first = (i + 1) - temp.size();
            temp = "";
        }

    }
    if(number == 0)
        cout << -1;
    else
        cout << number << " " << first;
    return 0;
}
