#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t-- > 0)
  {
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++)
      for(int j=0;j<m;j++)
        cin>>a[i][j];
   int max=-1,index=-1,count;
   for(int i=0; i<n; ++i)
   {
   		count=-1;
		for(int j=0; j<m; ++j)
		{
			if(a[i][j]==1)
				++count;
		}
		if(count>=max && count!=-1)
		{
			index=i;
			max=count;
		}		   	
   }
   cout<<index<<endl;
  }
  return 0;
}
