#include <bits/stdc++.h>
  using namespace std;

  int gcd(int n1, int n2)
  {
      if(n1==0)
        return n1/n2;
      else
      {
          if(n2>n1)
            swap(n1,n2);
          return n1/n2 + gcd(n1%n2,n2);
      }
  }

  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2;
        cin>>n1>>n2;
        if(n2>n1)
            swap(n1,n2);
        int x=gcd(n1,n2);
        cout<<x<<endl;
    }
    return 0;
  }
