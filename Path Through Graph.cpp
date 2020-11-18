#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll largestFactor(ll number)
{
    int factor=1;
    for(ll i=2;(ll)i*i<=number;i++)
    {
        if(number%i==0)
        {
            factor = number/i;
            return factor;
        }
    }
    return factor;
}

void findNonRepeat(vector <ll> a, int n){
    int count=0;
    unordered_map<int,int> hash;

    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }



    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second==1)//frequency==1 means non-repeating element
        count++;
    cout<<count<<endl;
}

int main()
{
        ll num1,num2;
        cin>>num1>>num2;
        vector<ll> vec1;
        while(num1!=1)
        {
            vec1.push_back(num1);
           num1=largestFactor(num1);
        }
        while(num2!=1)
        {
             vec1.push_back(num2);
             num2=largestFactor(num2);
        }
        findNonRepeat(vec1,vec1.size());
}
