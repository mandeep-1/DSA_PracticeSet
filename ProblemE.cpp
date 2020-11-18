#include<iostream>
#include<math.h>
typedef unsigned long long int ll;
using namespace std;
ll modu = pow(10,9)+7;
ll ncr(ll n, ll r)
{
    ll i;
    ll num=1, den=1, res;
    for(ll i=1; i<=r; ++i)
    {
        den=den*i;
        num=num*(n-(i-1));
    }
    res=num/den;
    return res;
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ll modInverse(ll a)
{
    ll m0 = modu;
    ll y = 0, x = 1;

    if (modu == 1)
      return 0;

    while (a > 1)
    {
        // q is quotient
        ll q = a / modu;
        ll t = modu;

        // m is remainder now, process same as
        // Euclid's algo
        modu = a % modu, a = t;
        t = y;

        // Update y and x
        y = x - q * y;
        x = t;
    }

    // Make x positive
    if (x < 0)
       x += m0;

    return x;
}
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll total,exam,knows,nhiaate;
        ll wc, wf, p, q;
        cin>>total>>exam>>knows;
        nhiaate=total-knows;
        wc=ncr(total,exam);
        wf=ncr(nhiaate,exam);
        p=wc-wf;
        q=wc;

        ll hcf= gcd(p,q);

        p/=hcf;
        q/=hcf;

        ll x=(p* modInverse(q))%modu;
        cout<<p<<"  "<<q<<endl;
        cout<<x<<endl;
    }
    return 0;
}
