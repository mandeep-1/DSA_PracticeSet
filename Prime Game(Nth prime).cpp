#include <bits/stdc++.h>
  using namespace std;
 bool isPrime(int num)
 {
     for(int i=2;i<=sqrt(num);++i)
    {
        if(num%i==0)
            return false;
    }
    return true;
 }
  int calculate(int nth)
  {
      int count=0,k;
      vector <int> prime;
      for( k=2; count<nth; ++k)
      {
          bool check=isPrime(k);
          if(check)
            ++count;
      }
      return k-1;
  }

  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int nth;
        cin>>nth;
        cout<<calculate(nth)<<endl;
    }
    return 0;
  }
