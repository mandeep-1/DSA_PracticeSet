// Sieve of eratosthenes has complexity of nlog(logn)
// but it can be reduced to O(n) by manipulated sieve

#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
void segmentedSieve(int n)
 {
     bool numbers[n]={true};
     vector <int> primeNum;
     numbers[0]=numbers[1]=false;
     for (int i=2; i<=sqrt(n); ++i)
     {
         if(numbers[i] == true)
           for(int j=i*i; j<=n; j=j+i)
                numbers[j] = false;
     }
   //  int lower , upper = n;

     for (int i=2; i<=n; ++i)
        if(numbers[i]==true)
            cout<<i<<"  ";
 }
 int main()
 {
     int tc;
     cin>>tc;
     while(tc--)
     {
         int n;
         cin>>n;
         segmentedSieve(n);
     }
     return 0;
 }
