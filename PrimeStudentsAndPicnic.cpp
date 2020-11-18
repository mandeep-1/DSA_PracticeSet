#include <iostream>
#include<string>
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

  int main()
  {
    //write your code here
    int n,k;

    cin>>n>>k;
    while(n-- >0)
    {
        string num;
        cin>>num;
        int first = num[0]-'0';
        int last  = num[(num.length()-1)]-'0';
        bool f=isPrime(first);
        bool l=isPrime(last);
        if(f==true && l==true)
        {
            if(first + last > k)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
  }
