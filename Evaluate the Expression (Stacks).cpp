#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

stack <ll> st;

void solveExpression(char operand)
{
    ll n1=(ll)st.top();
    st.pop();
    ll n2=(ll)st.top();
    st.pop();
    cout<<endl<<"n1 = "<<n1<<"      n2 = "<<n2;
    cout<<endl<<"Operation = "<<operand<<endl;
    switch(operand)
    {
        case '+': st.push((ll)n2+n1);
            break;
        case '-': st.push((ll)n2-n1);
            break;
        case '*':st.push((ll)(n2*n1));
            break;
        case '/':st.push((ll)n2/n1);
            break;
        default : cout<<"Wrong operand \n";
    }
}

void solvePostfix(string str, int len)
{
    int i=0;
    while(i<str.length())
    {
        if(str[i]==' ')
            i++;
        else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
        {
            solveExpression(str[i]);
            i++;
        }
        else
        {
            int num=0;
            while(isdigit(str[i]) && i<str.length())
            {
                num = num * 10 + (int)(str[i] - '0');
                i++;
            }
            st.push(num);
        }
    }
    cout<<"Answer : "<<st.top()<<endl;
    st.pop();
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string str;
        getline(cin,str);
         while(str.length()==0 )
            getline(cin, str);
        solvePostfix(str,n);
    }
}
/* Priority for operators will be + < - < * < /.
Use the correct way to convert characters to digits.
After Evaluation, the Result can be very large, so use data type accordingly.
You can find a lot of test cases for this on the Internet, Verify your code for them.
Print the input to check you are taking input correctly. */
