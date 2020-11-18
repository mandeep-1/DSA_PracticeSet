#include <bits/stdc++.h>
  using namespace std;
  class SegmentTree
  {
    vector <int> st;
    public: SegmentTree(int n)
            {
              st.resize(4*n);
            }
            int constructST(int arr[], int start, int last,int position)
            {
              if(start==last)
              {
                st[position]=arr[start];
                return st[position];
              }
              int mid=start+(last-start)/2;
              st[position] = min(constructST(arr, start, mid ,2*position+1),
                               constructST(arr, mid+1, last,2*position+2));
              return st[position];
            }
            void printST()
            {
              for(int i=0; i<st.size(); ++i)
                cout<<st[i]<<" ";
              cout<<endl;
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
      for(int i=0; i<n; i++)
       cin>>arr[i];
      SegmentTree obj = SegmentTree(n);
      obj.constructST(arr, 0, n-1, 0);
      obj.printST();
    }
    return 0;
  }
