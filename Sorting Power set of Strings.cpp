#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void powerString(string str1, string str2,int index)
{
    if(index==str1.length())
        return;
    cout<<str2<<endl;
    for(int i=index+1; i<str1.length();++i)
    {

            powerString(str1,str2+str1[i],i);
    }
}

void sortString(string str)
{
    int arr[26]={0};
    for(int i=0; i<str.length(); ++i)
        arr[str[i]-'a']++;
    str="";
    for(int i=0; i<26; ++i)
    {
            while(arr[i]>0)
            {
                char ch= (char)(i+'a');
                str = str+ ch;
                arr[i]--;
            }
    }
    for(int i=0; i<str.length(); ++i)
    {
        string str2;
        powerString(str,str2+str[i],i);
    }

}
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        string str;
        cin>>str;
        sortString(str);
    }
}
