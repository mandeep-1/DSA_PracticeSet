#include <bits/stdc++.h>
  using namespace std;
  void brutepwd(string str1, int l)
  {
    if(str1.length()==l)
    {
      cout<<str1<<endl;
    }
    else
    {
      for(int i=1; i<=9; ++i)
      {
        string str2=to_string(i);
        brutepwd(str1+str2, l);
      }
    }
  }

  int main()
  {
    //write your code here
    int tc;
    cin>>tc;
    while(tc--)
    {
      int len;
      cin>>len;
      for(int i=1; i<=9; ++i)
      {
        string str1=to_string(i);
        brutepwd(str1,len);
      }
    }
    return 0;
  }
