#include <bits/stdc++.h>
  using namespace std;

  void findOne(int arr[], int n)
  {
      int flag=-1, low=0, high=n-1,mid;
      while(low<=high)
      {
          mid = low +(high-low)/2;
          if(arr[mid]==0)
          {
              low=mid+1;
          }
          else if(arr[mid]==1 && arr[mid-1]==0 || mid==0)
          {
              flag=mid;
              break;
          }
          else if (arr[mid]==1)
          {
              high= mid-1;
          }
        //  cout<<"Low= "<<low<<" High="<<high<<endl;
      }
      cout<<flag<<endl;
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
        for(int i=0; i<n; ++i)
            cin>>arr[i];
        findOne(arr, n);
    }
    return 0;
  }
