#include<bits/stdc++.h>
using namespace std;

int validcode(string str, int l)
{
    int sum=0,maxSum=0;
    for(int i=0; i<l; ++i)
    {
        if(str[i]=='<')
            sum = sum + 1;
        else
            sum = sum - 1 ;

        if(sum==0)
            maxSum=i+1;
        if(sum<0)
            break;

    }
    return maxSum;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = validcode(s,n);
        cout<<ans<<endl;
    }
}
