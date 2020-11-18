#include <bits/stdc++.h>
#include <string>
  using namespace std;
  
int main()
{
    //write your code here
//    std:: string:: iterator it;
    int t;
    cin>>t;
    while(t-->0)
    {
    	string tab;int count=0;
    	string str;
    	while (tab.length()==0 ) 
            getline(cin, tab); 
    	
    	getline(cin,str);
    	cout<<tab<<endl;
    	cout<<str<<endl;
    //	for(it=str.begin(); it<str.end(); it+=3)
		for(int it=0; it<str.length(); it=it+3)    
		{	
    	//	if(*it==tab[0] || *(it+1)==tab[1])
    		if(str[it]==tab[0] || str[it+1]==tab[1])
			{
    			count=1;
    			cout<<"YES"<<endl;
    			break;
			}
		}
		if(count==0)
			cout<<"NO"<<endl;
	}
    return 0;
  }
