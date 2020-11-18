#include <bits/stdc++.h>
using namespace std;
  
  int main()
  {
    //write your code here
    int t,n;
    cin>>t;
    while(t>0)
    { int ca=0,cd=0;
      t--;
      cin>>n;
      char ch[n];
      cin>>ch;
      for(int i=0; i<n;i++)
       {
	    if(ch[i]=='A')
            ca++;
        else if(ch[i]=='D')
            cd++;
      }
      if(ca>cd)
          cout<<"Aditya"<<endl;
      else if(ca<cd)
          cout<<"Danish"<<endl;
      else
          cout<<"AdiDan"<<endl;
    }
    return 0;
  }
