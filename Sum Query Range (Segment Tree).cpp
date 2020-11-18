#include <bits/stdc++.h>
  using namespace std;
  const long long M=1e9+7;
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
              st[position] = (constructST(arr, start, mid ,2*position+1)+
                               constructST(arr, mid+1, last,2*position+2))%M;
              return st[position];
            }
            void printST()
            {
              for(int i=0; i<st.size(); ++i)
                cout<<st[i]<<" ";
              cout<<endl;
            }
            int sumST(int start, int last, int qlow, int qhigh, int sindex)
            {
              //full overlap
              if(qlow<=start && qhigh>=last)
                return st[sindex];
              // no overlap
              if(last < qlow || start > qhigh)
                return 0;
              int mid=(start + last)/2;
              return (sumST(start,mid, qlow,qhigh,sindex*2+1)+
                         sumST(mid+1,last,qlow,qhigh,sindex*2+2))%M;
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
      int q;
      cin>>q;
      while(q--)
      {
          int low, high;
          cin>>low>>high;
          int sumNum = obj.sumST(0,n-1, low-1, high-1,0);
          cout<<sumNum<<endl;
      }
    }
    return 0;
  }
