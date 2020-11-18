#include <bits/stdc++.h>
  using namespace std;

  class Heap
  {
    int size;
    vector <int> heap;
    public: Heap(int s)
            {
              size=0;
              heap.resize(s);
            }
            int left(int index)
            {
              return 2*index;
            }
            int right(int index)
            {
              return 2*index+1;
            }
            int parent(int index)
            {
              return index/2;
            }
            void heapify(int index)
            {
              int p = parent(index);
              cout<<"Parent = "<<p<<endl;
              while(p>=1 && heap[p]>heap[index])
              {
                swap(heap[p],heap[index]);
                index=p;
                p = parent(index);
              }
            }
            void insert(int index,int value)
            {
              size++;
              heap[index]=value;
              heapify(index);
            }
            void decreaseKey(int key, int index)
            {
              if(index > size)
              {
                cout<<"Not Valid\n";
                return;
              }
              heap[index]=key;
              heapify(index);
            }
            void print()
            {
              for(int i=1; i<=heap.size(); ++i)
                cout<<heap[i]<<" ";
              cout<<endl;
            }
  };

  int main()
  {
    int tc;
    cin>>tc;
    while(tc--)
    {
      int s,delAt;
      cin>>s>>delAt;
      Heap obj(s);
      int val;
      for(int i=1; i<=s; ++i)
      {
        cin>>val;
        obj.insert(i,val);
      }
      obj.print();
    }
  }
