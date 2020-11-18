#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b)
{
	if (!a)
	return b;
	return gcd(b%a,a);
}
ll reduceB(ll a, char b[])
{
	ll mod = 0;
	for (int i=0; i<strlen(b); i++)
    {
       mod = (mod*10 + b[i] - '0')%a;
       cout<<i<<":  "<<mod<<endl;
    }

	return mod;
}
ll gcdLarge(ll a, char b[])
{
	ll num = reduceB(a, b);
	return gcd(a, num);
}

int main()
{
	ll a = 1221;
	char b[] = "1234567891011121314151617181920212223242526272829";
	if (a == 0)
		cout << b;
	else
		cout << gcdLarge(a, b);

	return 0;
}

