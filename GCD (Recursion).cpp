#include <bits/stdc++.h>
#include <vector>
  using namespace std;
int gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}	
/*	int gcd(int n1, int n2)
	{
		if(n1==n2)
			return n1;
		else
		{
			if(n1>n2)
				n1=n1-n2;
			else
				n2=n2-n1;
			gcd(n1,n2);
		}
	}*/
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-- > 0)
    {
    	int n1,n2;
    	cin>>n1>>n2;
   
    	int hcf= gcd(n1, n2);
    	cout<<hcf<<endl;
	}
    return 0;
  }
