#include <bits/stdc++.h>
  using namespace std;
  
  void printBinary(string str, int n)
  {
  	if(str.length()==n)
  	{
  		int flag=0;
  		for(int i=0;i<n;++i)
  		{
			if(str[i]=='1'&&str[i+1]=='1')
  			{
			  	flag=1;
			}
		}
		if(flag==0)	
  			cout<<str<<endl;
	}
	else
	{
		printBinary(str+'0',n);
		printBinary(str+'1',n);	
	}  		
  }
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-- > 0)
    {
    	int n;string s;
    	cin>>n;
		printBinary(s,n);
	}
    return 0;
  }
