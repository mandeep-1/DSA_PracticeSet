#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-- > 0)
    {
    	int n;
    	cin>>n;
    	vector<int> vec; 
    	for(int i=0; i<n;++i)
    	{
    		int x; cin>>x;
    		vec.push_back(x);
		}
		sort(vec.begin(),vec.end());
		int count=1;
		for(int i=2; i<=vec[0]; ++i)
		{
			int c=0;
			for(int j=0; j< vec.size(); ++j)
			{
				if(vec[j]%i==0)
					c++;
			
			}
			if(c==vec.size())
				++count;
		}
		cout<<count<<endl;
	}
    return 0;
  }
