#include <bits/stdc++.h>
  using namespace std;
   int gcd(int a, int b)
  {
    if(b==0)
      return a;
    return gcd(b,a%b);
  }
  class segmentTree{
    int n;
    vector <int> vec;
    public: segmentTree(int size)
            {
              vec.resize(4*size,-1);
            }

            int createST(int arr[],int low,int high,int pos)
            {
              if(low==high)
              {
                vec[pos]= arr[low];
                return arr[low];
              }

              int mid = low + (high-low)/2;
              vec[pos] = gcd(createST(arr, low  , mid , 2*pos+1),
                             createST(arr, mid+1, high, 2*pos+2));
              return vec[pos];
            }

            void print()
            {
              for(int i=0; i<vec.size(); ++i)
                cout<<vec[i]<<" ";
            }

            int gcdRange(int low, int high, int qs, int qh,int position)
            {
                //NO OVERLAPPING
                if(low > qh || qs>high)
                  return 0;
                //FULL OVERLAP
                if(low>=qs && high<=qh)
                  return vec[position];
                //PARTIAL OVERLAP
                int mid=low+(high-low)/2;

                int ans= __gcd(gcdRange(low  , mid  , qs,qh, 2*n+1),
                gcdRange(mid+1, high , qs,qh, 2*n+2));
                cout<<"Answer in function : "<<ans<<endl;
                return ans;
            }
  };

  int main()
  {
    //write your code here
    int tc;
    cin>>tc;
    while(tc--)
    {
      int n;
      cin>>n;
      int arr[n];
      for(int i=0; i<n; ++i)
        cin>>arr[i];

      segmentTree st = segmentTree(n);
      st.createST(arr,0,n-1,0);

     cout<<"The tree formed is : ";
     st.print();
     cout<<endl;
     int queries;
     cin>>queries;

     while(queries--)
     {
        int qs,qe;
        cin>>qs>>qe;
        int ans = st.gcdRange(0,n-1,qs-1,qe-1,0);
        cout<<"The ans is : "<<ans<<"\n";
     }
    }
    return 0;
  }
