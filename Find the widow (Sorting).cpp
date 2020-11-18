#include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    //write your code here
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
      int len;
      cin>>len;
      int arr[len];
      for(int i=0; i<len; ++i)
        cin>>arr[i];
      int start=-1, last=-1;
      for(int i=0; i<len-1; ++i)
      {
        if(arr[i]>arr[i+1])
        {
          start=i;
          break;
        }
      }
      for(int i=len-1; i>0; --i)
      {
        if(arr[i-1]>arr[i])
        {
          last=i;
          break;
        }
      }
      int min= INT_MAX, max=INT_MIN;
      for(int i=start; i<=last; ++i)
      {
        if(min>arr[i])
          min = arr[i];
        if(max<arr[i])
          max = arr[i];
      }
      for(int i=0; i<start; i++)
        if(arr[i]>min)
        {
          start=i;
          break;
        }
      for(int i=len-1; i>last; --i)
        if(arr[i]<max)
        {
          last=i;
          break;
        }
      cout<<start<<" "<<last<<"\n";
    }
    return 0;
  }
