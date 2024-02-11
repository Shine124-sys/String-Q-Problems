#include<bits/stdc++.h>
using namespace std;
void compare(string str1,string str2)
{
       int si=str1.length();
       sort(str1.begin(),str1.end());
       sort(str2.begin(),str2.end());
       int count=0;
       for (int i = 0; i <si-1; i++)
       {
           if(str1[i]!=str2[i])
           {
            cout<<"It is not valid Anagram";
            break;
           }
            else
            {
                count=1;
            }
       }
      if(count==1) 
      {
        cout<<" Valid anagram";
      }
}
int main()
{   string str1="listen";
    string str2="silent";
    if(str1.length()==str2.length())
    {
        compare(str1,str2);
    }
    else{
        cout<<"Not valid anagram";
    }

   return 0;
}