#include<bits/stdc++.h>
using namespace std;

void mergeArr(int arr[],int start, int mid, int last)
{
    int n1 = mid-start+1;
    int n2 = last-mid;

    int left[n1],right[n2];

    for(int i=0; i<n1; ++i)
        left[i] = arr[start+i];
    for(int i=0; i<n2; ++i)
        right[i] = arr[mid+1+i];

    int i=0,j=0,k=start;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
           arr[k]=left[i];
           k++;
           i++;
        }
        else
        {
            arr[k]=right[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=left[i];
        ++k;
        ++i;
    }

    while(j<n2)
    {
        arr[k]=right[j];
        ++k;
        ++j;
    }
}

void mergeSort(int arr[], int start, int last)
{
    if(start<last)
    {
        int mid= start + (last-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,last);
        mergeArr(arr,start,mid,last);
    }
}

void cost(int arr[], int n)
{
    int price=0;
    for(int i=0; i<n; ++i)
    {
        if(arr[i]!=i+1)
        {
            int x= arr[i]-(i+1);
            price = price + (x>0?x:x*(-1));
        }
    }
    cout<<price<<endl;
}

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; ++i)
            cin>>arr[i];
        mergeSort(arr,0,n-1);
        cost(arr,n);
        for(int x=0; x<n; ++x)
            cout<<arr[x]<<" ";
        cout<<endl;
    }
}
