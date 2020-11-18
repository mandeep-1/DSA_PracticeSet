#include <bits/stdc++.h>
  using namespace std;
string addFun(string str1, string str2)
{
	string ret;
	if(str1.length()<str2.length())
		str1.swap(str2);
	int c=0;
	for(int i=0; i<str2.length(); ++i)
	{
		int s= int(str1[i]-'0') + int(str2[i]-'0')+ c;
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
	return ret;
}

int main()
{
    //write your code here
    int t;
    cin>>t;
    while(t-->0)
    {
    	string num1, num2;
    	cin>>num1>>num2;
    	num1=addFun(num1, num2);
    	cout<<num1;
	}
    return 0;
}
