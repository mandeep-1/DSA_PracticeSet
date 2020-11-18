#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
  using namespace std;

/*  int choices(int arr[], int n, int k)
  {
      int low=1, high=n, mid;
      while(low <= high)
      {
          mid = low + (high - low)/2;
          if(arr[mid] == k)
           return mid;

          if(mid==1)
           if(arr[mid]<=k &&arr[mid+1]>k)
                return mid;
           else return mid+1;

          if(arr[mid-1]<=k && arr[mid]>k)
            return mid-1;
          if(mid==n)
            if(arr[mid] <= k)
                return mid;
            else return mid-1;

          if(arr[mid]>k)
            high =mid-1;
          else
            low= mid+1;

      }
      return -1;
  }
*/
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    vector <int> price;
    for(int i=0; i<n; ++i)
    {
        int x;
        cin>>x;
        price.push_back(x);
    }
    sort(price.begin(), price.end());

    int qnum;
    cin>>qnum;

    for(int i=0; i<qnum; ++i)
    {
      int money;
      cin>>money;
      vector <int>:: iterator u;
      u=upper_bound(price.begin(), price.end(), money);
      cout<<u-price.begin()<<endl;
      /*if(money<price[1])
        cout<<"-1"<<endl;
      else
        cout<<"ans= "<<choices(price,n, money)<<endl;*/
    }
    return 0;
  }
