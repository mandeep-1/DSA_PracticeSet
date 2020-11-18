#include <bits/stdc++.h>
using namespace std;

void printCapital(string str, int pos)
{
  if(isupper(str[pos])==true)
    {
    cout<<pos<<endl;
    return;
    }
    if(pos==str.length())
    {
        cout<<"-1"<<endl;
        return;
    }
  printCapital(str,pos+1);
}

int main()
{
  //write your code here
  int tc;
  cin>>tc;
  while(tc--)
  {
    string str;
    cin>>str;
    printCapital(str,0);
  }
  return 0;
}
