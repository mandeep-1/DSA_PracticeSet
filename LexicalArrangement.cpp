#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-->0)
    {
    	string str;char ch;int alpha[25]={0};
    	cin>>str;
    	for(int i=0;i<str.length(); ++i)
    	{
    		++alpha[str[i]-97];
		}
		for(int i=25; i>=0;--i)
		{
			if(alpha[i]>0)
			{
				int j=alpha[i];
				while(j>0)
				{
					char ch=i+97;
					cout<<ch;
					j--;
				}
			}
		}
    	cout<<endl;
	}
    return 0;
  }
