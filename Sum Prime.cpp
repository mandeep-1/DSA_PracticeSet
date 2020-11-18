#include <bits/stdc++.h>
#include <vector>
  using namespace std;

  void checkOddPrimeDigit(vector <int>  arr, int n)
  {
      long long sum=0;
      vector <int>  res;
      for(int i=0; i<arr.size(); ++i)
      {
          int num=arr[i], check=0;
          while(num>0)
          {
              int rem=num%10;
              num/=10;
              if(rem==3 || rem==5 || rem==7)
                check=1;
          }
          if(check==0)
            res.push_back(arr[i]);
      }
      for(int i=0;i<n;++i)
      {
        sum+=res[i];
      }
      cout<<sum<<endl;
  }
    void createPrime(int n)
    {
        vector <int> vec;int c=0;
        vec.assign(75000,1);
        for(int i=2; (long long)i*i<=75000; ++i)
        {
            if(vec[i]==1)
            {
                for(int j=i*i; j<75000; j=j+i)
                    vec[j]=0;
            }
        }
        vector <int> prime;
        for(int i=2; i<75000; ++i)
            if(vec[i]==1)
                prime.push_back(i);
        checkOddPrimeDigit(prime, n);
    }
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t-- > 0)
    {
        int n;
        cin>>n;
        createPrime(n);
    }
    return 0;
  }
