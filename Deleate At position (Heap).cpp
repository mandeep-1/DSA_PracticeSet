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

            void heapifyDown(int par)
            {
              int smaller = par;
              int l = left(par);
              int r = right(par);
              if(l<=size && heap[l]<heap[par])
                smaller=l;
              if(r<=size && heap[r]<heap[smaller])
                smaller=r;
              if(smaller!=par)
              {
                swap(heap[par],heap[smaller]);
                par=smaller;
                heapifyDown(par);
              }
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
            void decreaseKey(int key)
            {
              heap[key]=heap[size];
              size--;
              heapifyDown(key);
            }
            void print()
            {
              for(int i=1; i<=size; ++i)
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
      cout<<"Before = ";
      obj.print();
      obj.decreaseKey(delAt);
      cout<<"After = ";
      obj.print();
    }
  }
