
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
            int minST(int start, int last, int qlow, int qhigh, int sindex)
            {
              //full overlap
              if(qlow<=start && qhigh>=last)
                return st[sindex];
              // no overlap
              if(last < qlow || start > qhigh)
                return INT_MAX;
              int mid=(start + last)/2;
              return min(minST(start,mid, qlow,qhigh,sindex*2+1),
                         minST(mid+1,last,qlow,qhigh,sindex*2+2));
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
     // obj.printST();
      int q;
      cin>>q;
      while(q--)
      {
          int low, high;
          cin>>low>>high;
          int minNum = obj.minST(0,n-1, low-1, high-1,0);
          cout<<minNum<<endl;
      }
    }
    return 0;
  }
/*
Input format ranges are given based on 1-based indexing.
For each range, you need to find the minimum element and store it in a segment array.
Preprocessing the data, and then using it will help in reducing time complexity.
The segment array size should be 4∗n */
