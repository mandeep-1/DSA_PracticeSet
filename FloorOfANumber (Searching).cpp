#include <bits/stdc++.h>
typedef long long ll;
  using namespace std;

  void calFloor(vector <int> vec, ll x)
  {
      ll low=0,high=vec.size()-1,mid,flag=-1;
        while(low<=high)
        {
            mid=low + (high-low)/2;
            if(vec[mid]==x)
            {
                flag=mid;
                break;
            }
            else if(vec[mid]<x)
            {
                flag=mid;
                low=mid+1;
            }
            else if(vec[mid]>x)
                high=mid-1;
            cout<<"Low= "<<low<<"   High="<<high<<endl;
        }
        cout<<flag<<endl;
  }
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
        ll num,x;
        vector <int> v;
        cin>>num>>x;
        int arr[num];
        for(int i=0; i<num; ++i)
        {
            int q; cin>>q;
            v.push_back(q);
        }
        calFloor(v,x);
    }
    return 0;
  }
