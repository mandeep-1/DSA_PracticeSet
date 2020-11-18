// MATRIX MULTIPLICATION
#include<iostream>
using namespace std;
int main()
{
 int x[2][2],y[2][2],z[2][2];
 int p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0;
 cout<<"Enter first matrix";
 for(int a=0;a<2;a++)
 for(int b=0;b<2;b++)
 {
 	cin>>x[a][b];
 	z[a][b]=0;
 }
 cout<<"Enter second matrix ";
 for(int i=0;i<2;i++)
 for(int j=0;j<2;j++)
 {
 	cin>>y[i][j];
 }
  
 p1= (x[0][0] + y[1][1])*(y[0][0]+y[1][1]);
 p2= (x[1][0]+x[1][1])*y[0][0];
 p3= x[0][0]*(y[0][1]-y[1][1]);
 p4= x[1][1]*(y[1][0]-y[0][0]);
 p5= (x[0][0]+y[0][1])*y[1][1];
 p6= (x[1][0]-y[0][0])*(y[0][0]+y[0][1]);
 p7= (x[0][1]-x[1][1])*(y[1][0]+y[1][1]);
 z[0][0]=p1+p4-p5+p7;
 z[0][1]=p3+p5;
 z[1][0]=p2+p4;
 z[1][1]=p1-p2+p3+p6;
 cout<<"The resultant matrix is: \n";
 for(int i=0;i<2;i++)
 {
 	cout<<endl;
 for(int j=0;j<2;j++)
 {
 	cout<<z[i][j]<<"   ";
 }
 }
 return 0;
}


