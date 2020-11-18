#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  char ch;
  int arr[5][10]={-1};
   for(int i=0; i<5; i++)
  {
    for(int j=0; j<10; ++j)
{

cout<<arr[i][j]<<" ";

    }
    cout<<endl;
  }

  cin>>ch;
  for(int i=0; i<5; i++)
  {
    int count =1;
    for(int k=0, j=9; k<=i;k++,j--)
    {
      arr[i][k]=count;
      arr[i][j]=count;
      count++;
    }
  }
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<10; ++j)
    {
      if(arr[i][j]!=-1)
        cout<<arr[i][j];
      else
        cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}
