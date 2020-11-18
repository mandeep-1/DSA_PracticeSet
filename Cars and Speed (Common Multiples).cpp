#include <bits/stdc++.h>

  using namespace std;
  
  int gcd(int n,int m)
  {
  		if(n==0)
  			return m;
  		else if(m==0)
  			return n;
  		else
  		{
  			if(m>n)
  				swap(m,n);
  			gcd(n%m, m);
		  }
  }
  
  int numbers(int n, int m, int k)
  {
  	long g=gcd(n,m);
  	cout<<"GCD cal="<<g<<endl;
  	long l= ((long) n*m)/g;
  	cout<<"LCM cal="<<l<<endl;
  	int count=0;
  	for(int x=l; x<=k; x=x+l)
  	{
  		count++;
	  }
	return count;
  }
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-- > 0)
    {
    	int n,m,k;
    	cin>>n>>m>>k;
    	cout<<numbers(n,m,k)<<endl;
	}
    return 0;
  }
