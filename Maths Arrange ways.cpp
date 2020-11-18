#include <bits/stdc++.h>
using namespace std;

long int factorial(int n)
{
  if(n==1)
    return 1;
 long int fact =(long int) (n* factorial(n-1));
 cout<<"Factorial="<<fact<<endl;
    return fact;
}


long int ncr(int n, int r)
{
   long int ans = 1;
    for (int i = 1; i <= r; i++) {
        ans *= (n - r + i);
        ans /= i;
    }
    return ans;
}

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    int m,w,x,y;
    cin>>m>>w>>x>>y;
    long int men = ncr(m,x);
    cout<<"Men= "<<men<<endl;
    long int women = ncr(w,y);
    cout<<"Women = "<<women<<endl;
    long int npr = (long int)factorial(x+y);
    cout<<"Arrange Ways = "<<npr<<endl;
    long int ans=(long int)(men*women*npr);
    cout<<"Final Ans = "<<ans<<endl;
  }
  return 0;
}
