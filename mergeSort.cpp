#include <bits/stdc++.h>
  using namespace std;

  void mergeFun(int arr[], int left, int mid, int right)
  {
      int n1=mid- left+1, n2=right-mid;
      int arrL[n1], arrR[n2];
      for(int i=0; i<n1; ++i)
        arrL[i]=arr[left + i];
      for(int i=0; i<n2; ++i)
        arrR[i]=arr[mid +1 + i];
      int i=0, j=0, k=left;
      while(i<n1 && j<n2)
      {
          if(arrL[i]<=arrR[j])
          {
              arr[k]=arrL[i];
              ++i;
          }
          else
          {
              arr[k]=arrR[j];
              ++j;
          }
          ++k;
      }
      for( ;i<n1; ++i,++k)
        arr[k]=arrL[i];
      for( ;j<n2; ++j,++k)
        arr[k]=arrR[j];
  }

  void mergeSort(int arr[], int left, int right)
  {
      if(left < right)
      {
      int mid= left + (right-left)/2;
      mergeSort(arr, left, mid);
      mergeSort( arr, mid+1, right);
      mergeFun(arr, left, mid, right);
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
        mergeSort(arr, 0, n-1);
        print(arr, n-1);
    }
    return 0;
  }
