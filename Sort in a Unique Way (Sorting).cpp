#include <bits/stdc++.h>
using namespace std;

int uniqueFun(int arr[], int start, int last)
{
    bool sorted=true;
    for(int i=start; i<last; ++i)
    {
        if(arr[i]>arr[i+1])
        {
            sorted = false;
            break;
        }
    }
    if(start<last)
    {
        if(sorted)
            return last-start+1;
        else
        {
            int left=-1,right=-1;
            int mid = start + (last-start)/2;
            left = uniqueFun(arr,start,mid) ;
            right= uniqueFun(arr,mid+1,last);
            return max(left,right);
        }
    }
    return 1;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; ++i)
            cin>>arr[i];
        int maxV = uniqueFun(arr, 0, n-1);
        cout<<maxV<<endl;
    }
}

