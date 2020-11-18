#include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      string str;
      cin>>str;
      int arr[26]={0};
      for(int i=0; i<str.length(); ++i)
      {
        arr[str[i]-97]= ++arr[str[i]-97];
      }
      int flag=-1;
      for(int i=0; i<str.length(); ++i)
      {
        if(arr[str[i]-97]==1)
        {
          cout<<i<<"\n";
          flag=1;
          break;
        }
      }
      if(flag==-1)
        cout<<flag<<endl;
    }
    return 0;
  }
