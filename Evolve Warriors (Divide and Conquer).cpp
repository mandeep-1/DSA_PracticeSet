#include <bits/stdc++.h>
  using namespace std;

  typedef long long ll;

  ll maxWarrior(ll n,ll m, int x, int y)
  {
    ll start=1,last=n;
    while(start!=last)
    {
      ll mid =((ll) (last+start+1))/2;
      ll current = (ll) x * mid;
      ll possible = (ll)((n-mid)*y + m);
      if(current<=possible)
      {
        start = mid;
      }
      else
        last = mid-1;
    }
    return start;
  }

  int main()
  {
    //write your code here
    ll n, m;
    int x, y;
    cin>>n>>m>>x>>y;
    ll ans = maxWarrior(n,m,x,y);
    cout<<ans;
    return 0;
  }
