#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    std:: string:: iterator i;
    std:: string:: iterator r;
    int t;
    cin>>t;
    while(t-- > 0)
    {
    	string str; int diff=0;
    	cin>>str;
    	int count=0;
    	i=str.begin();
    	r=str.end()-1;
    	for( ;i<r; ++i,--r)
    	{
    		diff=*i-*r;
    		diff=diff>=0?diff:diff*(-1);
    		count= count+ diff;
		}
    	cout<<count<<endl;
	}
    return 0;
  }
