#include <bits/stdc++.h>
  using namespace std;

  void beautifulBrackets(string str, int tc)
  {
      int changes=0;
      stack <char> st;
      for(int i=0; i<str.length(); ++i)
      {
          if(str[i]=='{')
            st.push(str[i]);
          else
          {
              if(!st.empty())
                st.pop();
              else
              {
                  ++changes;
                  st.push('{');
              }
          }
      }
      changes =changes + st.size()/2;
      cout<<tc<<". "<<changes<<endl;
  }

  int main()
  {
    //write your code here
    string str;
    cin>>str;
    int tc=1;
    while(str[0]!='-')
    {
        beautifulBrackets(str,tc);
        tc++;
        cin>>str;
    }
    return 0;
  }
