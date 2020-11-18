#include<iostream>
# define max 10
using namespace std;
int push(int *a,int top)
{
	if(top>=max)
	  cout<<"\nStack overflow. Delete some values\n";
	else
	{
		top++;
		cout<<"\nEnter the value";
		cin>>a[top];
	}
	return top;
}
int pop(int *a,int top)
{
	if(top==-1)
		cout<<"\nStack underflow.\n";
	else
	{
		int temp;
		temp=a[top];
		cout<<"\nThe deleted value is "<<a[top]<<"  ";
		top--;
	}
	return top;
}
void show(int *a,int top)
{
	if(top==-1)
		cout<<"\nStack is empty";
	else
	{
		int temp=top;
		while(temp>-1)
		{
			cout<<a[temp];
			temp--;
		}
	}
}

int main()
{
	int a[10],top=-1,c,ch;
	do
	{
	cout<<"\nPress 1 to insert a value \nPress 2 to delete a value \nPress 3 to show the values";
	cin>>c;
	switch(c)
	{
		case 1:top=push(a,top);
				break;
		case 2:top=pop(a,top);
				break;
		case 3: show(a,top);
				break;
		default:cout<<"\nSorry! Wrong input try again";
	}
	cout<<"\nPress 0 to perform again";
	cin>>ch;
	}while(ch==0);
return 0;
}

