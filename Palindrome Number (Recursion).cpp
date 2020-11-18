#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int palindrome(int num, int power)
{
  int rem = num%10 * pow(10,power);
  if(power<=0)
    return num;
  int number = rem + palindrome(num/10,--power);
  return number;
}

int main()
{
  //write your code here
  int tc;
  cin>>tc;
  while(tc--)
  {
    int num;
    cin>>num;
    int digits=log10(num) + 1;
    cout<<"Digits : "<<digits<<endl;
    cout<<palindrome(num,digits-1)<<endl;
    if(palindrome(num,digits-1)==num)
        cout<<"Yes\n";
    else
        cout<<"No\n";
  }
  return 0;
}
