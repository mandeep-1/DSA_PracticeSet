#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<2)
        return false;
    for(int i=2; i<=sqrt(n); ++i)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int counter=0;
    for(int i=2; counter<n; ++i)
    {
            if(isPrime(i))
            {
                ++counter;
                cout<<"Prime Number "<<counter<<"="<<i<<"\n";
            }
    }
}
