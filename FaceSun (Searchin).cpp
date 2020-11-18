#include <bits/stdc++.h>
  using namespace std;

  void findCount(int arr[], int n)
  {
      int flag=1,maxH=arr[0];
      for(int i=1; i<n; i++)
      {
          flag = arr[i]>=maxH?flag+1:flag;
          maxH = max(maxH, arr[i]);
      }
      cout<<"Ans: "<<flag<<endl;
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
        int hgt[n];
        for(int i=0; i<n; ++i)
            cin>>hgt[i];
        findCount(hgt, n);
    }
    return 0;
  }
