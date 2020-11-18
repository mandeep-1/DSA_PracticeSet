#include<bits/stdc++.h>
using namespace std;

double calculateMedian(int A[], int B[], int n, int m)
{
    int i=0,j=0, m1=-1,m2=-1;
    int mid = (n+m)/2;
    if((n+m)%2==1)
    {
        for(int counter=0; counter<=mid; ++counter)
        {
            if(i!=n && j!=m)
                m1 = (A[i]<=B[j])?A[i++]:B[j++];
            else if(i < n)
                m1=A[i++];
            else
                m1=B[j++];
        }
        return m1;
    }
    else
    {
        for(int counter=0; counter<=mid; counter++)
        {
            m2=m1;
            if(i!=n && j!=m)
                m1= (A[i]<B[j])? A[i++] : B[j++];
            else if(i<n)
                m1=A[i++];
            else
                m1=B[j++];
        }
        return (double)(m1+m2)/2;
    }
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, m;
        cin>>n>>m;
        int A[n], B[m];
        for(int i=0; i<n; ++i)
            cin>>A[i];
        for(int i=0; i<m; ++i)
            cin>>B[i];
        double m1 = calculateMedian(A, B, n, m);
        cout<<m1<<endl;
    }
    return 0;
}
/*
Take some test cases and verify your algorithm.
Take care of base conditions.
To solve it in logarithmic time complexity use modified binary search.
Binary search can be used to find mid elements of both arrays.
Once you get both arrays, think of various conditions.
Both arrays don't need to be the same size.
  */
