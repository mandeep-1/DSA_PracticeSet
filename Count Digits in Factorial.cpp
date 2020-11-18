//****************DIGITS IN A FACTORIAL******************
//Given an integer N. The task is to find the number of digits that
// appear in its factorial, where factorial is defined as,
//factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.
//
#include<bits/stdc++.h>
using namespace std;

int digitsInFactorial(int N)
{
    //Your code here
    double sum=0;
   for(int i=1; i<=N; i++)
   {
       sum = sum+ log10(i);
   }
    return floor(sum) + 1;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<N<<" Digit is "<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
