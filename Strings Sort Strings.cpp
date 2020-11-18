#include <bits/stdc++.h>
  using namespace std;

  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(--t)
    {
        string str;
        cin>>str;
        int arr[26]={0};
        for(int i=0; i<str.length(); ++i)
            arr[str[i]-97]= ++arr[str[i]-97];
        for(int i=25; i>=0; --i)
        {
            if(arr[i]>0)
            {
                while(arr[i]--)
                    cout<<(char)(i+'a');
            }
        }
        cout<<endl;

    }
    return 0;
  }
