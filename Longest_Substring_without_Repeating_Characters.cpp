#include<bits/stdc++.h>
using namespace std;
int check(string str)
{
   int si=str.length();
   int res=0;

   for (int i = 0; i <si; i++)
   {
       vector<bool>visited(256);
       for (int j = i; j < si; j++)
       {
            if(visited[str[j]]==true)
            { 
                break;
            }
            else
            {
               res=max(res,j-i+1);
            }

       }
       visited[str[i]]=false;
   }
    return res; 
};
int main()
{   string str="Hellodear", len;
    len=check(str);
    cout<<len;
   return 0;
}