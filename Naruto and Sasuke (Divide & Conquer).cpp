#include <bits/stdc++.h>
  using namespace std;

  int narutoScore(int np, int sp, int gems, int x, int y)
  {
    int start=0, last=gems;
    while(start<=last)
    {
    int mid = (start+last)/2;
      int n = np + mid*x;
      int s = sp + (gems-mid)*y;
      if(n==s)
        return mid;
      else if(n>s)
        last=mid-1;
      else
        start=mid+1;
    }
    return -1;
  }
  int main()
  {
    //write your code here
    int A, B, K, X, Y;
    cin>>A>>B>>K>>X>>Y;
    int ans = narutoScore(A,B,K,X,Y);
    cout<<ans<<endl;
    return 0;
  }
