#include<iostream>
using namespace std;
struct actselect
{
	int s[15],f[14];
} obj;

int main()
{
	int k=0,n,act[15],i=0;
	cout<<"How many total activities are there?";
	cin>>n;
	for(int k=1;k<=n;k++)
	{
	cout<<"Enter the start time and finish time of activity "<<k<<"	";
	cin>>obj.s[k];
	cin>>obj.f[k];
	}
	act[0]=1;
	for(int m=2;m<=n;m++)
	{
		if(obj.s[m]>=obj.f[act[i]])
		{	
			i++;
			act[i]=m;
		}
	}
	cout<<"The acticvities selected are: ";
	for(int j=0;j<=i;j++)
		cout<<act[j]<<"  ";
	return 0;
}
