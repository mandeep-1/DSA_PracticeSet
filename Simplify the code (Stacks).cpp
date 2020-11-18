/* *****************************************
"/a/./"   --> means stay at the current directory 'a'
"/a/b/.." --> means jump to the parent directory
              from 'b' to 'a'
"////"    --> consecutive multiple '/' are a  valid
              path, they are equivalent to single "/".

Input : /home/
Output : /home

Input : /a/./b/../../c/
Output : /c

Input : /a/..
Output:/

Input : /a/../
Output : /

Input : /../../../../../a
Output : /a

Input : /a/./b/./c/./d/
Output : /a/b/c/d

Input : /a/../.././../../.
Output:/

Input : /a//b//c//////d
Output : /a/b/c/d
********************************************/
#include<bits/stdc++.h>
using namespace std;

void simplifiedPath(string str)
{
   stack <string> st;
   string str2;

   for(int i=0; i<str.length(); ++i)
   {
       str2.clear();
       if(str[i]=='/')
        continue;
       while(str[i]!='/' && i<str.length())
       {
           str2.push_back(str[i]);
           ++i;
       }
       if(str2==".."&& (!st.empty()))
       {
           st.pop();
       }
       else if(str2==".")
        continue;
       else
        st.push(str2);

   }

   stack <string> st1;
   while(!st.empty())
   {
       st1.push(st.top());
       st.pop();
   }
   string temp="";
   while(!st1.empty())
   {
       temp=temp+st1.top();
       if(st1.size()!=1)
        temp=temp+"/";
       st1.pop();
   }
   cout<<temp<<endl;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        cin>>str;
        simplifiedPath(str);
    }
}
