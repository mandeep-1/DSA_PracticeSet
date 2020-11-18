#include <bits/stdc++.h>
  using namespace std;
  void print(vector <int> vec)
  {
  	while(vec.size()>1)
  	{	
  		cout<<vec[0];
  		for(int i=1;i<vec.size();++i)
  		{
  			cout<<"*";
  			cout<<vec[i];
		}
		cout<<endl;
		int n=vec.size();
		int p=vec[n-1]*vec[n-2];
		vec[n-2]=p;
		vec.resize(n-1);
	 }
  }
  void factors( int n)
  {
  	vector <int > vec;
  	vec.push_back(1);
  	int i=2;
  	while(n>1)
  	{
  		if(n%i==0)
		 {
		 	vec.push_back(i);
			 n=n/i;	 		
		 }	
		else
			++i;
	}
	print (vec);
  }
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-- > 0)
    {
    	int n;
    	cin>>n;
    	if(n==1)
    		cout<<"1*1"<<endl;
    	else factors(n);
	}
    return 0;
  }
