#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n,k,t,temp1,temp2;
  cin>>t;
  while(t>0){
     t--;
    cin>>n>>k;
    int arr[n],m[n];
    
    for(int i=0;i<n;i++)
      cin>>arr[i];
   
   //If number of elements in array is greater than 1 and number of rotaions are greater than 0
   
    if(k>0 && n>1) 
    {
 	    for(int mi=0,i=n-k;i<n;i++,mi++)
 	    {
 		     m[mi]=arr[i];
	    }
    	for(int i=0,mi=k;mi<n;i++,mi++)
	     	m[mi]=arr[i];
	   for(int i=0;i<n;i++)
        cout<<m[i]<<" ";
      cout<<endl;
    }
    
    else
    {
      for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
       cout<<endl;
    } 
  }
 return 0;
}
