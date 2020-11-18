#include <bits/stdc++.h>
  using namespace std;

  void calSubstring(int n, string str)
  {
      int c=0;
      for(int i=0; i<n; ++i)
      {
          for(int j=1; j<=n-i; ++j)
          {
              string sub=str.substr(i,j);
              if(sub[0]=='1' &&sub[sub.size()-1]=='1')
                ++c;
          }
      }
      cout<<c<<endl;
  }

  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
        int len;string str;
        cin>>len>>str;
        calSubstring(len,str);

    }
    return 0;
  }
