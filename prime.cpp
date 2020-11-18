#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector <int> a;
    int l,x,count;
     cout<<"Enter limit and digits";
    cin>>l;
   
    for(int i=0;i<l;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    for(int i=0;i<l;i++)
    {
        count=0;
        if(a[i]==2)
            cout<<"Prime\n";
        else if(a[i]==1)
            cout<<" Not prime\n"; 
        else{
            int sq=sqrt(a[i]);
            for(int k=2;k<=a[i]/2;k++)
            {
                if(a[i]%k==0)
                {
                    count++;
                    break;
                }
            }
            if(count==0)
                cout<<"Prime\n";
            else
                cout<<"Not prime\n";
        }
    }
    return 0;
}

