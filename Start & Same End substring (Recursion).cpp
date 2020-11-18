#include <bits/stdc++.h>
using namespace std;

int substring(string str, int start, int last, int n, int cnt)
{
    for(int i=start; i<=last; ++i)
        cout<<str[i];
    cout<<endl;
    if(str[start]==str[last])
        cnt++;
    if(start==n && last==n)
     {
         cout<<"Count ="<<cnt<<endl;
    }
    else if(last==n)
    {
        start++;
        last=start;
        substring(str,start,last,n,cnt);
    }
    else{
        substring(str,start,last+1,n,cnt);
    }
}

int main()
{
  //write your code here
  int tc;
  cin>>tc;
  while(tc--)
  {
      string str;
      cin>>str;
      int counter = substring(str,0,0,str.length()-1,0);

  }
  return 0;
}
