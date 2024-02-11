#include <bits/stdc++.h>
using namespace std;
int bal_par(string exo)
{
    stack<char> temp;
    for (int i = 0; i < exo.length(); i++)
    {
        if (temp.empty())
        {
            temp.push(exo[i]);
        }
        else if ((temp.top() == '(' && exo[i] == ')') || (temp.top() == '{' && exo[i] == '}') || (temp.top() == '[' && exo[i] == ']'))
        {
            temp.pop();
        }

        else
        {

            temp.push(exo[i]);
        }
    }
    if (temp.empty())
    {
        return true;
    }

    return false;
}
int main()
{
    string exo = "(){[]}";
    if (bal_par(exo))
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not balanced";
    }
  
    return 0;
}