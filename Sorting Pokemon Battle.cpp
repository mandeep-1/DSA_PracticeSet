#include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    //write your code here
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
      int n;
      cin>>n;
      int arnab[n], daip[n],won=0;
      for(int i=0; i<n; ++i)
        cin>>arnab[i];
      for(int i=0; i<n; ++i)
        cin>>daip[i];
      sort(arnab,arnab+n);
      sort(daip,daip+n);

      int aL=n-1,dL=n-1;
      for(int i=0; i<n; ++i)
      {
        if(arnab[aL]>daip[dL])
        {
          ++won;
          aL--;
          dL--;
        }
        else
          dL--;
      }
      cout<<won<<endl;
    }
    return 0;
  }
