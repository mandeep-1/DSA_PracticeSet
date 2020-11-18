#include <bits/stdc++.h>
  using namespace std;
  
bool checkVowel(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			return true;
	else
			return false;
}
  int main()
  {
    //write your code here
    string:: iterator it;
    int t;
	cin>>t;
    while(t-->0)
    {
    	int count=0;
    	string str;
    	cin>>str;
    	for(it=str.begin(); it<str.end(); )
    	{
    		char ch=*it;
    		bool x=checkVowel(ch);
    		if(x)
    		{
    			++it;
			}
			else
			{
				if(*it=='n')
				{
					++it;
				}
				else
				{
					char c=*(it+1);
					bool y=checkVowel(c);
					if(y)
					{
						it=it+2;
					}
					else
					{
						count=-1;
						cout<<"NO"<<endl;
						break;
					}
				}
			}
		}
		if(count==0)
			cout<<"YES"<<endl;
	}
    return 0;
  }
