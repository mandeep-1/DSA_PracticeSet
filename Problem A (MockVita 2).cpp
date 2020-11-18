#include<bits/stdc++.h>
#include<algorithm>
#include <vector>

using namespace std;

template<typename T>
void pop_front(std::vector<T> &v)
{
	if (v.size() > 0) {
		v.erase(v.begin());
	}
}

void match(vector <char> &BTB, vector <char> &GTB, int n)
{
    int found=0, countPair=0;
    while(BTB.size()>0)
    {
        found=0;
        for(long unsigned int i=0; i<BTB.size(); i++)
        {
            if(BTB.front()==GTB.front())
            {

                ++countPair;
                found=1;
                pop_front(BTB);
                pop_front(GTB);
                break;
            }
            else
              rotate(GTB.begin(), GTB.begin ()+1,GTB.end());
        }
        if(found==0)
            break;
    }
    int ans = n - countPair;
    cout<<ans;
}

int main()
{
    int n;
    cin>>n;
    vector <char> BTB;
    vector <char> GTB;

    for(int i=0; i<n; ++i)
    {
        char x;
        cin>>x;
        BTB.push_back(x);
    }
    for(int i=0; i<n; ++i)
    {
        char x;
        cin>>x;
        GTB.push_back(x);
    }
    match(BTB, GTB, n);
    return 0;
}
