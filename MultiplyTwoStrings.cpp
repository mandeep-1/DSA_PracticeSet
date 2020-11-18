#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

string addFun(string str1, string str2)
{
	string ret;
	if(str1.length()<str2.length())
		str1.swap(str2);
	int c=0;
	for(int i=0; i<str2.length(); ++i)
	{
		int s= (str1[i]-'0') + (str2[i]-'0')+ c;
		int r= s%10;
		c= s/10;
		ret.push_back(r+'0');
	}
	for(int i=str2.length(); i<str1.length(); ++i)
	{
		int s= c + (str1[i]-'0');
		int r= s%10;
		ret.push_back(r+'0');
		c= s/10;
	}
	if(c!=0)
		ret.push_back(c+'0');
	return ret;
}

string multiply(string str1, string str2)
{
	string res;
    	for(int j=0; j<str2.length(); ++j)
    	{
    		string mul;
    			for (int k=0; k<j; ++k)
    				mul.push_back('0');
    			int carry=0; int p=0;
    			for(int i=0;i<str1.length(); ++i)
    			{
    				p= int(str2[j]-'0') * int(str1[i]-'0') + carry;
    				char x=  p%10 + '0';
    				carry=p/10;
    				mul.push_back(x);
				}
				if(carry!=0)
					mul.push_back(carry+'0');
				res= addFun(res, mul);	
		}
		reverse(res.begin(), res.end());
	return res;
}
bool isZero(string str)
{
  int count=0;
  for(int i=0; i<str.length(); ++i)
  {
    if(str[i]!='0')
      count=1;
  }
  if(count==0)
    return true;
  else 
    return false;
}

int main()
{
    //write your code here
    int t;
    cin>>t;
    while(t-- > 0)
    {
    	string str1,str2;
    	cin>>str1;
    	cin>>str2;
    	bool c1=isZero(str1);
    	bool c2=isZero(str2);
    	if(c1 || c2)
    	{
    	  cout<<"0"<<endl;
    	  continue;
    	}
    	if(str1.length() < str2.length())
    		str1.swap(str2);
    
    	reverse(str1.begin(), str1.end());
    	reverse(str2.begin(), str2.end());
    	
    	string res=multiply(str1,str2);
    	cout<<res<<endl;
	}
    return 0;
}
