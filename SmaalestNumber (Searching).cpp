#include <bits/stdc++.h>
  using namespace std;

  int findCount(int arr[], int n, int k)
  {
      int i = 0;
        while (i < n)
        {
            int j, count = 1;
            for (j = i + 1; j < n && arr[j] == arr[i]; j++)
                count++;
            if (count == k)
                return arr[i];
            i = j;
        }

    return -1;
  }

  int main()
  {
    //write your code here
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; ++i)
            cin>>arr[i];
        cin>>k;
        sort(arr,arr+n);
        int ans=findCount(arr, n,k);
        cout<<ans<<endl;
    return 0;
  }
