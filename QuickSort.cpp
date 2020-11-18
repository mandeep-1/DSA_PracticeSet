#include <bits/stdc++.h>
  using namespace std;
int part(int arr[], int low, int high)
  {
      int i=low-1, pivot=arr[high];
      for(int j=low; j<high; ++j)
      {
          if(arr[j]<pivot)
          {
              ++i;
              swap(arr[i],arr[j]);
          }
      }
      swap(arr[i+1],arr[high]);
      return i+1;
  }

  void quickSort(int arr[], int low, int high)
  {
      if(low<high)
      {
          int pi=part(arr,low,high);
          quickSort(arr,low,pi-1);
          quickSort(arr,pi+1,high);
      }

  }

  void print(int arr[], int n)
  {
         for(int i=0;i<=n; ++i)
            cout<<arr[i]<<" ";
        cout<<endl;
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
        quickSort(arr,0, n-1);
        print(arr,n-1);

    }
    return 0;
  }
