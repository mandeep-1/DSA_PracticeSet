#include <bits/stdc++.h>
#include <string>
  using namespace std;
 
string rightRotate(string o)
 {
 	int l=o.length();
 	string rt;
 	rt.push_back(o[l-2]);
 	rt.push_back(o[l-1]);
 	for(int i=0;i<l-2;i++)
 	{
 		rt.push_back(o[i]);
	}
	return rt;
 }
  
string leftRotate(string o)
{
	int l=o.length();
	string lt;
	for(int i=2;i<l;++i)
	{
		lt.push_back(o[i]);
	}
	lt.push_back(o[0]);
	lt.push_back(o[1]);
	return lt;
}
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-->0)
    {
    	string orig, fake;
    	cin>>orig;
    	cin>>fake;
    	string str1= rightRotate(orig);
    	string str2= leftRotate(orig);
    	if(fake==str1 || fake==str2)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
	}
    return 0;
 }
  
