#include <bits/stdc++.h>
  using namespace std;
  long long upl(int u, int l)
  {
      long long fac=1,mid=1,low=1,res;
      for(int i=2; i<=u; ++i)
      {
          fac= fac* i;
        if(i==(u-l))
            mid=fac;
        if(i==l)
            low=fac;
      }
      res=fac/(mid*low);
      cout<<"numerator="<<fac<<"    mid="<<mid<<"   low="<<low<<"   result="<<res<<endl;

      return res;
  }
  long long permu(int num)
  {
      int p=1;
      for(int i=2; i<=num; ++i)
        p=p*i;
    return p;
  }
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int m,w,x,y;
        cin>>m>>w>>x>>y;
        long long res1,res2,res3;
        res1=upl(m,x);
        res2=upl(w,y);
        res3=permu(x+y);
        long long ans= (long long) res1*    res2 * res3;
        cout<<ans<<endl;
    }
    return 0;
  }
