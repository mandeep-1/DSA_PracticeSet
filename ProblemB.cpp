#include <bits/stdc++.h>
  using namespace std;

bool isPrime(ll n)
  {
      if(n==1)
        return false;
      else{
        for(ll i=2; i*i<=n; ++i)
        {
            if(n%i==0)
                return false;
        }
        return true;
      }
  }

vector <ll> primeSeries(ll n1, ll n2)
{
    vector <ll> vec1;

    ll temp = n1;
    if ( n1 % 2 == 0)
        n1++;
    while(n1<=n2)
    {
        if(isPrime(n1))
            vec1.push_back(n1);
        n1=n1+2;
    }
    return vec1;
}

void prll(vector <ll> vec)
{
    for(ll i=0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
}
  ll main()
  {
    //write your code here
    ll n1,n2;
    scanf("%d %d", &n1, &n2);
    vector <ll> vec;
    vec=primeSeries(n1,n2);
    prll(vec);
    return 0;
  }
