#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    string:: iterator it;
    int t;
	cin>>t;
    while(t-->0)
    {
    	int count= -1, i=0;
    	int freq[26]={0};
    	string str;
    	cin>>str;
    	for(it=str.begin(); it<str.end();++it)
    	{
    		++freq[*it-97];
		}
		for(it=str.begin(); it<str.end();++it,i++)
    	{	
    		if(freq[*it-97] == 1)
    		{
    			cout<<i<<endl;
    			count=1;
    			break;
			}
		}
		if(count==-1)
			cout<<count<<endl;
	}
    return 0;
  }
