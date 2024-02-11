#include<bits/stdc++.h>
using namespace std;
int main()
{    string str="ABC";
    int si=str.length();
    next_permutation(str.begin(),str.end());
    cout<<str;
   return 0;
}