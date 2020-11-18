#include <bits/stdc++.h>
  using namespace std;

bool isPrime(int n)
  {
      if(n==1)
        return false;
      else{
        for(int i=2; i*i<=n; ++i)
        {
            if(n%i==0)
                return false;
        }
        return true;
      }
  }

vector <int> primeSeries(int n1, int n2)
{
    vector <int> vec1;

    int temp = n1;
    if ( n1 % 2 == 0)
        n1++;
    while(n1<=n2)
    {
        if(isPrime(n1))
            vec1.push_back(n1);
        n1=n1+2;
    }
    return vec1;
}

void print(vector <int> vec)
{
    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
}
  int main()
  {
    //write your code here
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    vector <int> vec;
    vec=primeSeries(n1,n2);
    print(vec);
    return 0;
  }
