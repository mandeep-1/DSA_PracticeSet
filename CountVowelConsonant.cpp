#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    std::string:: iterator it;
    int t;
    cin>>t;
    while(t>0)
    {
    	t--;
    	int v=0,c=0;
    	string str;
    	cin>>str;
    	for(it=str.begin(); it<str.end();it++)
    	{
    	//	if(str[it]=='A'||str[it]=='E'||str[it]=='I'||str[it]=='O'||str[it]=='U')
    		if(*it=='A'||*it=='E'||*it=='I'||*it=='O'||*it=='U')
				++v;
    		else
    			++c;
		}
		cout<<v<<" "<<c<<endl;	
	}
    return 0;
  }
