
#include <bits/stdc++.h>
using namespace std;

int exactly3Divisors(int N)
{
    // Generate prime numbers upto sqrt(N)
    vector <bool> vec;
    vec.push_back(false);
    vec.push_back(false);
    for(int i=2; i*i<=N; ++i)
        vec.push_back(true);

    for(int i=2; i<=vec.size();++i)
    {
        for(int j=i*i;j<=vec.size(); j=j+i)
        {
            if(vec[j]==true)
                vec[j]=false;
        }
    }
    int count_var=0;
    for(int i=2; i<=vec.size(); ++i)
        if((vec[i]==true )&&((long long)(i*i)<=N))
            ++count_var;
    return count_var;
}

int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<"Number : "<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends
