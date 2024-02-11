#include<bits/stdc++.h>
using namespace std;
int main()
{   string str="malayalam";
     int si=str.length(),tr=1;;
     for (int i = 0,j=si-1; i <=j; i++,j--)
     {
        if(str[i]==str[j])
        {
            tr=1;
        }
        else
        {
            tr=0;
            break;
        }
     }
      if(tr==1)
      {
        cout<<" it is palindrom";

      }
      else
      {
        cout<<" It is not palindrom";
      }
     
   return 0;
}