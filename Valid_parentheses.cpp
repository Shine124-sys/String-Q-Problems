#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "[{()}[]]";
    stack<char> roo;
    for (int i = 0; i < str.length(); i++)
    {

        if (roo.empty())
        {
            roo.push(str[i]);
        }
        else if (roo.top() == '(' && str[i] == ')' || roo.top() == '{' && str[i] == '}' || roo.top() == '[' && str[i] == ']')
        {
            roo.pop();
        }
        else
        {
            roo.push(str[i]);
        }
    }
    if (roo.empty())
    {
        cout << "It is balanced ";
    }
    else
    {
        cout << "It is not balanced";
    }
    return 0;
}