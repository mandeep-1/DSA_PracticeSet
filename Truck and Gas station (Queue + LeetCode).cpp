/* https://leetcode.com/problems/gas-station/ */
#include<bits/stdc++.h>
using namespace std;

typedef long int ll;

vector <ll> gasAmount;
vector <ll> cost;

int solveProblem(int n)
{
    int found=-1;
    for(int i=0; i<n; i++)
    {
        if(gasAmount[i]>=cost[i])
        {
            ll tank=0,k=0;
            found=i;
            int j=i;
            while(k<n)
            {
                tank = (ll)tank+gasAmount[j];
                cout<<"Tank Fuel at "<<j<<" = "<<tank<<endl;
                if(tank >= cost[j])
                {
                    tank = tank - cost[j];
                }
                else
                {
                    found=-1;
                    break;
                }
                j=(j+1)%n;
                k++;
            }
        }
        if(found!=-1)
            break;
    }
    return found;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        gasAmount.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        cost.push_back(x);
    }
    int ans = solveProblem(n);
    cout<<ans;
}
