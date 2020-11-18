#include <bits/stdc++.h>
#include <string>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-- > 0)
    {
    	string str; 
    	cin>>str; int len=0;
    	for(int i=0; i<str.length(); ++i)
    	{
    		int freq[26]={0}, count=0;
    		int j=i;
    		while(j<str.length())
    		{
    			if(freq[str[j]-97] != -2)
    			{
    				++count;
    				freq[str[j]-97]=-2;
				}
				else
				{
					break;
				}
				j++;
			}
			len= max(len, count);
		}
		cout<<len<<endl;
	}
    return 0;
  }
