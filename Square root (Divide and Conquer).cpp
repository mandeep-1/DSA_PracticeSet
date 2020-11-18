#include <bits/stdc++.h>
  using namespace std;

  typedef long long ll;

  int calculateRoot(int num)
  {
    if(num==0 || num==1)
      return num;

    int x=num/2;

    while((ll)x*x>num)
       x=x/2;

    ll start=x, last=x*2;
    while(start!=last)
    {
        ll mid=((ll)(start+last +1))/2;
         if((ll)mid*mid > num)
            last=mid-1;
         else
            start=mid;
     }
     return start;
  }

  int main()
  {
    //write your code here
    int tc;
    cin>>tc;
    while(tc--)
    {
        int num;
        cin>>num;
        int root = calculateRoot(num);
        cout<<root<<"\n";
    }
    return 0;
  }
