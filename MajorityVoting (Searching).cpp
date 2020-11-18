#include <bits/stdc++.h>
  using namespace std;

  int findMonitor(int arr[], int n)
  {
    int cnt=0,j=arr[0],pcnt=-1,ans=-1;
    for(int i=0; i<n; )
    {

      while(arr[i]==j)
      {
           ++cnt;
           i++;
      }
        if(pcnt<cnt)
        {
          pcnt=cnt;
          ans=j;
        }
        j=arr[i];
        cnt=0;

    }
    cout<<"Count of maximum votes="<<pcnt<<"   of Voting Id="<<ans<<endl;
    if(pcnt>n/2)
      return ans;
    else
      return -1;
  }

  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++)
        cin>>arr[i];
      sort(arr,arr+n);
      if(n==1)
        cout<<arr[0]<<endl;
      else
      cout<<findMonitor(arr,n)<<endl;

    }
    return 0;
  }
