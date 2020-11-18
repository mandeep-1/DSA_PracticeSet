#include <bits/stdc++.h>
using namespace std;

int maxChunksToSort(int arr[]) {

		int n=arr.length,i, ans = 1;

        if(n==0) 
			return 0;

        int suffixMinimum[n];
        suffixMinimum[n - 1] = arr[n - 1];
        for (i = n - 2; i >= 0; i--) {
            suffixMinimum[i] = min(arr[i], suffixMinimum[i + 1]);
        }

        int prefixMaximum = arr[0];
        for (i = 0; i < n - 1; i++) {
            prefixMaximum = max(prefixMaximum, arr[i]);
            if (prefixMaximum <= suffixMinimum[i + 1]) {
                ans++;
            }
        }
        return ans;
    }

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t-->0)
  {
  	int n;
  	cin>>n;
  	int arr[n];
  	for(int i=0;i<n;++i)
  		cin>>arr[i];
  	int ans=maxChunksToSort(arr,n);
  	cout<<ans<<endl;
  }
  return 0;
}




