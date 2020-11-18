
#include <bits/stdc++.h>
  using namespace std;
  typedef long long ll;

  ll calgcd(ll a, ll b)
  {
    if(a==0)
      return b;
    return calgcd(b%a, a);
  }

  int main()
  {
    //write your code here
    int tc;
    cin>>tc;
    while(tc--)
    {
      ll num1,num2,k;
      cin>>num1>>num2>>k;
      ll hcf =calgcd(num1,num2);
      ll lcm = (ll)((ll)(num1*num2)/hcf);
      ll counter=0;
      for(ll i=lcm; i<=k; i=i+lcm){
        counter++;
      }
      cout<<counter<<endl;
    }
    return 0;
  }
