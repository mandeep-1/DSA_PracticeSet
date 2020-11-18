//Find three integers in the array whose sum is closest to x.
#include <bits/stdc++.h>
#include<math.h>
  using namespace std;

  int minimumDifference(int arr[], int n, int k)
  {
      int start,last=n-1;
      long int ans=10000000,sum=0;

      for(int start=0; start<n-2; ++start)
      {
          int j=start+1;
          last = n-1;
            while(j < last)
            {
                sum = arr[start] + arr[j] + arr[last];
                if(sum==k)
                    return 0;
                if(abs(k-sum)<ans)
                {
                    ans=abs(k-sum);
                }
                if(sum<k)
                  j++;
                else
                last--;
            }
      }
      return ans;
  }

  int main()
  {
    //write your code here
    int tc;
    cin>>tc;
    while(tc--)
    {
      int n;
      cin>>n;
      int arr[n];
      for(int i=0; i<n; ++i)
      {
        cin>>arr[i];
      }
      int k;
      cin>>k;
      sort(arr,arr+n);
      int ans=minimumDifference(arr,n,k);
      cout<<ans<<endl;
    }
    return 0;
  }

/*
1. Think of sorting the array and applying a two-pointer approach.
2. The length of the array will be greater than or equal to 5.
3. This question is inspired by finding a pair in an array with sum equals to k.
4. You have to print the minimum absolute difference.
*/
