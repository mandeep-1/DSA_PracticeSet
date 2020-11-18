#include <bits/stdc++.h>
  using namespace std;
  
  bool sameString(string str,int start, int end)
  {
  	if(start>=end)
  	{
  		return true;
	}
	else
	{
		if(str[start]==str[end])
		{
			sameString(str, start+1, end-1);
		}
		else
		{
			return false;
		}
	}
	return true;	  
  }
  
  int main()
  {
    //write your code here
   	int t;
   	cin>>t;
   	while(t-- >0)
   	{
   		string str;
   		cin>>str;
   		bool ch=sameString(str,0,str.length()-1);
   		if(ch)
   			cout<<"Yes"<<endl;
   		else
   			cout<<"No"<<endl;
	}
	    
    return 0;
  }
