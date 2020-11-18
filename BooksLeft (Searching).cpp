#include <bits/stdc++.h>
  using namespace std;

  void booksLeft(int arr[], int n, int k)
  {
      int low=0, high=n-1;
      while(arr[low] <= k && low<n)
            low++;
      while (arr[high]<=k && high>=low)
            high--;
      cout<<"Low ="<<low<<" High= "<<high<<"Ans= "<<high-low+1<<endl;
  }

  int main()
  {
    //write your code here
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; ++i)
            cin>>arr[i];
        booksLeft(arr,n,k);
    }
    return 0;
  }
