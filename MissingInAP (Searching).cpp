#include <bits/stdc++.h>
  using namespace std;

  int findMissingAP(int arr[], int n, int d)
  {
      int low=0,high=n-1,mid=-1,x=-1,a=arr[0];
      while(low<high)
      {
          mid = low + (high - low)/2;
          x= a + mid*d;

          if(arr[mid+1]-arr[mid]!=d)
            return arr[mid]+d;
          if(mid>0 && arr[mid]-arr[mid-1]!=d)
            return arr[mid]-d;
          if(mid==0 && arr[mid+1]-arr[mid]!=d)
            return arr[mid]+d;


          if(x == arr[mid])
              low = mid+1;
          else
              high = mid -1;
      }
      cout<<"Out of the loop with no answer \n";
      return 92939492;
  }

  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-- )
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int d= (arr[n-1] - arr[0])/n;
        cout<<findMissingAP(arr, n, d)<<endl;
    }
    return 0;
  }
