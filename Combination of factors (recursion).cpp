#include<iostream>
#include <string>
using namespace std;

void func(int n, int d, string str)
{
	if(n==1)
		cout<<str<<endl;
	else{
		for(int i=d; i<=n;++i)
		{
			if(n%i==0)
			{
			string cp= to_string(i);
			func(n/i,i,str +" "+ cp); 
			}
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while(t-- >0)
	{
		int n;
		cin>>n;
		string s;
		s.push_back('1');
		func(n,2,s);
	}
	return 0;
}
