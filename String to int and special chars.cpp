#include<bits/stdc++.h>
#include<string>
using namespace std;

void solvePostfix(string str)
{
    int i=0;
    while(i<str.length())
    {
        if(str[i]==' ')
            i++;
        else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
        {
            cout<<"For i :"<<i<<"\n";
            cout<<"Operand : "<<str[i]<<"\n";
            i++;
        }
        else
        {
            int num=0;
            while(isdigit(str[i]) && i<str.length())
            {
                cout<<"For i :"<<i<<"\n";
                num = num * 10 + (int)(str[i] - '0');
                i++;
            }
            cout<<"Number: "<<num<<endl;
        }
    }
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        getline(cin,str);
         while (str.length()==0 )
            getline(cin, str);
        cout<<"The string is "<<str<<"\n";
        solvePostfix(str);
    }
}

