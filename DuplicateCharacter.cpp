#include <bits/stdc++.h>
#include <string>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-->0)
    {
    	int flag=-1, freq[26]={0};
    	string str;
    	cin>>str;
    	for(int i=0; i<str.length();++i)
    	{
    		++freq[str[i]-97];
		}
		for(int i=0; i<26;++i)
    	{
    		if(freq[i]>1)
    		{
    			char ch=	i+97;
    			flag++;
    			cout<<ch<<"="<<freq[i]<<" ";
			}
	
		}
		if(flag==-1)
			cout<<flag;
		cout<<endl;	
	}
    return 0;
  }
