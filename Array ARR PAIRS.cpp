#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
	int n,pairs,ac,bc,a,b,count=0;
  	vector <int> vec;
  	vector <int> freq;
  	
  	cin>>n>>pairs;
  	cin>>a>>b;
  	
  	vec.push_back(a);
  	vec.push_back(b);
  	freq.push_back(1);
  	freq.push_back(1);
  	
  	for(int k=1; k<pairs; ++k)
  	{
  		cin>>a>>b;
  		ac=0; bc=0;
  		for(int i=0; i<vec.size(); i++)
  		{
  			if(a==vec[i])
      		{
        		freq[i]++; 
        		ac=1;
			}
			if(b==vec[i])
      		{
        		freq[i]++; 
        		bc=1;
			}
		}
		if(ac==0)
		{
					vec.push_back(a);
					freq.push_back(1);
		}
		if(bc==0)
		{
					vec.push_back(b);
					freq.push_back(1);
		}
		if(ac==0 && bc==0)
        {
    			cout<<"NO"<<endl;
            	 return 0;
        }
        else count++;
  	}
  		for(int x=0; x<vec.size(); ++x)
        	cout<<vec[x]<<" ";
        cout<<endl;
    for(int x=0; x<vec.size(); ++x)
        	cout<<freq[x]<<" ";
        cout<<endl;
  	
 /* 	if(freq[0]<freq[1])
  	{
  		freq[0]= freq[0] + freq[1];
  		freq[1]= freq[0] - freq[1];
  		freq[0]= freq[0] - freq[1];
	}

	int max1 =freq[0], max2=freq[1];
	
	for(int k=2;k<freq.size();k++)
		max2=max(max2,freq[k]); */
	
	if(count == pairs-1)
    	cout<<"YES"<<endl;
	else
	 cout<<"NO";
	 
	cout<<count<<endl;
  return 0;
}
