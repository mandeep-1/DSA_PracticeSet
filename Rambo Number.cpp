#include <bits/stdc++.h>
typedef long long ll;
  using namespace std;
long long const m=1000000007;

ll solution(ll A, ll B, ll K) {
        ll lower = A + (K - A %K)%K;
        ll upper = B - (B%K + K)%K;
        cout<<"Lower= "<<lower<<"  Upper= "<<upper<<endl;
        return (upper - lower)/K + 1;
}
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
        ll p,q,r,flag =0;
        cin>>r>>p>>q;
        flag = solution(p, q, r);
        cout<<flag<<endl;
    }
    return 0;
  }
