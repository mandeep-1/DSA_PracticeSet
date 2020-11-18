#include <bits/stdc++.h>
  using namespace std;
  typedef long int ll;

  ll maxHeight(int n, int k, int arr[], ll start, ll last)
  {
      int ans=0;
    while(start<=last)
    {
      ll sum=0;
      ll mid = ((ll)(start + last))/2;
      for(int i=0; i<n; ++i)
      {
          ll rem = arr[i]%mid;
          ll div = arr[i]/mid;
          if(arr[i]==rem+(div*mid))
            sum = sum + div;
      }
      if(sum<k)
          last=mid-1;
      else
      {
          ans=mid;
          start=mid+1;
      }
    }
    return ans;
  }

  int main()
  {
    //write your code here
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; ++i)
    cin>>arr[i];
    ll ans = maxHeight(n,k,arr,1,1000000000);
    cout<<ans<<endl;
    return 0;
  }
