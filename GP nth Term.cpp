//Print nth term of the GP
#include<bits/stdc++.h>
using namespace std;

//User function Template for C++

//Complete this function
double termOfGP(int A,int B,int N)
{
    //Your code here
    double R = (double)B/A;
    cout<<"Ratio is "<<R<<" "<<endl;;
    double NTH = double (A * (double)pow(R,(N-1)));
    return NTH;
}

// { Driver Code Starts.


int main()
{
    int T; //testcases total
    cin>>T;//input the testcases

    for(int i=0;i<T;i++) //white testcases are not exhausted
    {
        int A,B;
        cin>>A>>B; //input first and second term of gp
        int N;
        cin>>N; //input n

        cout<<floor(termOfGP(A,B,N))<<endl;
    }

    return 0;
}

  // } Driver Code Ends
