#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t,k,n;
  cin>>t;
  while(t>0)
  {
      --t;
      cin>>n>>k;
      int arr[n],j,sum=0,max=0;
      for(int i=0;i<n;i++)
          cin>>arr[i];
          
      for(int i=0; i+k <n; i++ ){
          j=i, sum=0;
          while(j < n)
          {
          	cout<<sum<<" "<<arr[j]<<"=";
            sum = sum+ arr[j];
            j = j+k;
            cout<<sum<<endl;
            if(sum<0)
              break;
          }
          max=max>sum? max : sum;
      }
      cout<<max;
  }
  return 0;
}
