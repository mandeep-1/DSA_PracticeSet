/* Given two integers x and y(x>y). The only operation you can perform is, choose any Prime integer m
 and subtract it any number of times from x. The task is to determine whether it is possible to make
x equal to y. Prepbytes, CodeForces: https://codeforces.com/problemset/problem/1238/A*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  long int x, y,diff;
  cin>>x>>y;
  diff=x-y;
  if(diff>1)
    cout<<"YES\n";
  else
  cout<<"NO\n";
  return 0;
}
