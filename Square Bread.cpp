#include <bits/stdc++.h>
  using namespace std;
  int c=0;
  int gcd(int l, int b)
  {
    if(l==0)
      return b;
    else if(b==0)
      return l;
    else
    {
     	if(l<b)
      		swap(l,b);  
		return	gcd(l%b,b);
		//c+=l/b;   
    }
   // return c;
  }
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-- > 0)
    {
      int l,b;
      c=0;
      cin>>l>>b;
      if(l<b)
      	swap(l,b);
    int x=gcd(l,b);
    int ans=l/x * b/x;
      cout<<ans<<endl;
    }
    return 0;
  }
