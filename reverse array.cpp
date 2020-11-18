#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n,k,t;
  cin>>t;
  while(t>0)
  {
    t--;
    cin>>n>>k;
    int temp,arr[n];
    
    for(int i=0;i<n;i++)
      cin>>arr[i];
  	if(n>1)
 	while(k>0){
 		k--;
 		temp=arr[n-1];
 		for(int i=n-1;i>0;i--){ 
 			arr[i] = arr[i-1];
		 }
 		arr[0]=temp;
	 }
   	for(int x=0;x<n;x++)
   		cout<<arr[x]<<" ";
   	cout<<endl;
  }
  return 0;
}
