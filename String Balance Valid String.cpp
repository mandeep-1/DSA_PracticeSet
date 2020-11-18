#include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int opening=0, closing=0;
        if(str.length()%2==1)
            cout<<"No \n";
        else
        {
            int flag=0;
            for(int i=0; i<str.length(); ++i)
            {
                if(str[i]=='(')
                    opening++;
                else
                    closing++;
                if(closing>opening+1)
                {
                    flag=-1;
                    break;
                }
            }
            if(flag==0)
                cout<<"Yes \n";
            else
                cout<<"No\n";
        }
    }
    return 0;
  }
