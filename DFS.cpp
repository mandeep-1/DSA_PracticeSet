/*#include<iostream>
#include<vector>
#define max 7
using namespace std;
struct node
{
	int vertex;
	node *next;
} *adj[max];
void creategraph(node *adj[],int num)
{
	int i,m;
	node *last,*ptr;
	for(i=1;i<=num;i++)
		adj[i]=NULL;
	for(i=1;i<=num;i++)
	 cout<<adj[i];
	for(i=1;i<=num;i++)
	{
		cout<<"Enter the number of nodes in the adjacency list of node "<<i;
		cin>>m;
		last=NULL;
		for(j=1;j<=m;j++)
		{
			cout<<"Enter the "<<j<<" adjacent node";
			cin>>ptr->vertex;
			ptr->next=NULL;
			if(adj[i]==NULL)
				adj[i]=last=ptr;
			else
			{
				last->next=ptr;
				last=ptr;
			}
		}
	}				
}
void dfs(node *adj[],int num,int s;)
{
	node *ptr;
	stack *st;
	int i,u;
	for(i=1;i<=num;i++)
		color[i]=0;
	color[s]=1;
	stack *top=NULL;
	
}

int main()
{
	int num,s;
	cout<<"How many vertices are there";
	cin>>num;
	creategraph(adj,num);
	cout<<"Enter the source vertex";
	cin>>s;
	dfs(adj,num,s;)
	return 0;
}*/
#include<iostream>
using namespace std;
int cost[10][10],i,j,k,n,stk[10],top,v,visit[10],visited[10];
 
main()
{
int m;
cout <<"Enter the number of vertices";
cin >> n;
cout <<"How many edges are there? ";
cin >> m;
cout <<"\n Enter source and destination vertices of the EDGES \n";
for(k=1;k<=m;k++)
{
cin >>i>>j;
cost[i][j]=1;
}
 
cout <<"Enter the initial vertex";
cin >>v;
cout <<"ORDER OF VISITED VERTICES";
cout << v <<" ";
visited[v]=1;
k=1;
while(k<n)
{
	for(j=n;j>=1;j--)
	if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
	{
		visit[j]=1;
		stk[top]=j;
		top++;
	}
	v=stk[--top];
	cout<<v << " ";
	k++;
	visit[v]=0; visited[v]=1;
}
}

