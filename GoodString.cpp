#include <bits/stdc++.h>
#include <string>
  using namespace std;
  
  int main()
  {
    //write your code here
    std:: string:: iterator it;
	int t;
	cin>>t;
	while(t-- >0)
	{
		string str;int count=0,flag=0;
		cin>>str;
		for(it=str.begin(); it<str.end(); ++it)
		{
			if(*it == 'a')
				++count;
		}
		int l=str.length()/2;
		while(!(count>l))
		{
			++flag;
			str.resize((str.length())-1);
			l=str.length()/2;
		}
		cout<<str.length();
	}
    return 0;
  }
