#include <bits/stdc++.h>
#include <vector>
  using namespace std;
  
  vector <int> factors(int num1)
  {
  	vector <int> vec;
  	for(int i=2; i<=num1; i++)
		if(num1%i==0)
			vec.push_back(i);
	return vec;
  }
 /* void print(vector <int> vec)
  {
  	for(int i=0;i<vec.size();++i)
		cout<<vec[i]<<" ";
	cout<<endl;	
  } */
  int gcd(vector <int> vec1, vector <int> vec2)
  {
  	int hcf=1, x=1,i=0,j=0;
  	while(i<vec1.size()&&j<vec2.size())
  	{
  		if(vec1[i]==vec2[j])
  		{
  			x=vec1[i];
  			++i; ++j;
		}
		else if(vec1[i]<vec2[j])
			++i;
		else ++j;
		hcf=max(hcf,x);
	}
	return hcf;
  }
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-- > 0)
    {
    	int n1,n2;
    	vector <int> vec1,vec2;
    	cin>>n1>>n2;
    	vec1=factors(n1);
    	vec2=factors(n2);
    //	print(vec1);
    //	print(vec2);
    	int hcf= gcd(vec1, vec2);
    	cout<<hcf<<endl;
	}
    return 0;
  }
