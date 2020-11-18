#include <bits/stdc++.h>
using namespace std;
void Merge(int a[], int low, int high, int mid)
{
  int i=low,j=mid+1,k=0;
  int temp[high-low+1];

  while(i<=mid && j<= high)
  {
    if(a[i]>a[j])               //comparison step
        temp[k++]=a[i++];
    else
        temp[k++]=a[j++];
  }
  while(i<=mid)
  {
      temp[k++]=a[i++];
  }
  while(j<=high)
  {
      temp[k++]=a[j++];
  }
  for(i=low;i<=high;i++)
  {
    a[i]=temp[i-low];
  }
  return;
}


void MergeSort(int a[],int low, int high)
{
  int mid;
  if(1<high-low)
  {
    mid=(low+high)/2;
    MergeSort(a,low,mid);
    MergeSort(a,mid+1,high);
    Merge(a,low,high,mid);
  }
  return;
}


int main()
{
  //write your code here
  int n,req=;
  cin>>n;
  int a[n];
  
  for(int i=0;i<n;i++)
    cin>>a[i];
 
  if(n==1)
      req=0;
  else
  {
    MergeSort(a,0,n-1);
    for(int i=0; i<n-1; i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if(a[j]<=0.5*a[i]+7 || (a[j]>100 &&a[i]<100) )
        {
          
        }
        else
          ++req;
      }
    }    
  }
  cout<<req;
  return 0;
}
