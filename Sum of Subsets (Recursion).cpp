//****************RUNTIME ERROR***************************

#include <bits/stdc++.h>
using namespace std;

long int countSum(int arr[], int n, int curIndex, long int sum, int subnum)
{
    if(curIndex==n)
        return sum;
    else
    {
        for(int i=curIndex+1; i<n ;++i)
        {
            sum= sum + countSum(arr,n,i,sum+arr[i],subnum+1);
        }
    }
}

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        long int totalSum=0,subnum=0;
        for(int i=0; i<n; ++i)
        {
           totalSum  = totalSum + countSum(arr, n, i,totalSum+arr[i],subnum+1);
        }

        cout<<"Total Sum="<<totalSum<<endl;
    }

}
