#include <bits/stdc++.h>
#include <vector>
using namespace std;

long calMove(vector <int> v, int n,int i)
{	
	long c=0,temp=0,val=0;
	long left=0,right=0;
	
    for(;i < n; i=i+2)
    {	c=0;
		left=  i==0?  0 : v[i-1];
		right= i==n-1?0 : v[i+1];

      if(v[i] < left)
      {
        c= 1+ (left - v[i]);
       	if(i!=0) 
	   		v[i-1]= v[i-1]-c;
	   	val=val+c;
      }
      else if(v[i]==left && i!=0)
      {
      	c=1;
      	v[i-1]= v[i-1]-c;
      	val=val+c;
	  }
      if(v[i] < right )
      {
        c= 1+ (right - v[i]);
        if(i!=n-1)
			 v[i+1]= v[i+1]-c;
		val=val+c;
      }
      else if(v[i]==right && i!=n-1)
      {
      		c=1;
      		v[i+1]= v[i+1]-c;
      		val=val+c;
	  }
      
    }
    return val;
}

int main()
{
  //write your code here
  int n,x;
  long c=0, even=0, odd=0;
  cin>>n;
  vector <int> ve;
  vector <int> vo;
  for(int i = 0; i<n; i++){
  	cin>>x;
  	ve.push_back(x);
  	vo.push_back(x);
  }
      
  
  even= calMove(ve, n, 0);
  odd= calMove(vo, n, 1);
  cout<<even<<"  "<<odd<<endl;
  c= min(even, odd);
  cout<<c<<endl;
  return 0;
}
