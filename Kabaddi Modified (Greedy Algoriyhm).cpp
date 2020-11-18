//https://www.geeksforgeeks.org/policemen-catch-thieves/
#include <bits/stdc++.h>
  using namespace std;
  void findAnswer(string str, int dist)
  {
      vector <int> ones;
      vector <int> zeroes;

      for(int i=0; i<str.length(); ++i)
      {
        if(str[i]=='1')
          ones.push_back(i);
        else
          zeroes.push_back(i);
      }

      int i=0, j=0, ans=0;
      while(i<ones.size() && j<zeroes.size())
      {
        if(abs(ones[i]-zeroes[j])<=dist)
        {
          ++ans;
          ++i;
          ++j;
        }
        else if(ones[i]<zeroes[j])
          ++i;
        else
          ++j;
      }
      cout<<ans<<endl;
  }
  int main()
  {
    //write your code here
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
      string str;
      int dist;
      cin>>str>>dist;

      findAnswer(str,dist);
    }
    return 0;
  }
/*
Take some more test cases and understand the question carefully by reading it again and again.
A player can defeat an opponent only if its distance is less than or equal to K.
Store positions of 1 and 0 in two different vectors and proceed further.
For finding maximum wins, find how working greedily can help.
Think for corner cases like when the length of the string is 1
or string contains all ones or zeroes. */
