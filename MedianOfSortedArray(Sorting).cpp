#include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    //write your code here
    int n,j,pivot;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;++i)
      cin>>arr[i];
    for(int i=0; i<n; ++i)
    {
      j=i;
      pivot=arr[i];
      while(arr[j-1]>pivot && j>=1)
      {
        arr[j]=arr[j-1];
        j--;
      }
      arr[j]=pivot;
    }
    for(int i=0; i<n;++i)
      cout<<arr[i]<<"   ";
    int med=arr[n/2];
    cout<<endl<<med;
    return 0;
  }
