#include <bits/stdc++.h>
  using namespace std;

  class Heap
  {
    int size;
    vector <int> heap;
    public: Heap(int n)
            {
              size=0;
              heap.resize(n);
            }
            int parent(int index)
            {
              return (index-1)/2;
            }
            int left(int index)
            {
              return 2*index + 1;
            }
            int right(int index)
            {
              return 2*index + 2;
            }
            void insert(int val,int index)
            {
              if(size>heap.size())
              {
                cout<<"Out of Capacity, Try deleting some elements\n";
              }
              size++;
              int p = parent(index);
              heap[index]= val;
              while(p>=0 && heap[p]>heap[index])
              {
                swap(heap[p],heap[index]);
                index=p;
                p= parent(index);
              }
            }
            void heapify(int index)
            {
              int l= left(index);
              int r= right(index);
              int p= index;
              int smaller= p;
              if(l<size && heap[smaller]>heap[l])
                smaller=l;
              if(r<size && heap[smaller]>heap[r])
                smaller=r;
              if(smaller!=p)
              {
                swap(heap[p],heap[smaller]);
                heapify(smaller);
              }
            }
            int extractMin()
            {
              if(size==0)
              {
                return INT_MAX;
              }
              int minHeap = heap[0];
              heap[0]=heap[size-1];
              size--;
              heapify(0);
              return minHeap;
            }
            void print()
            {
              for(int i=0; i<size; ++i)
                cout<<heap[i]<<" ";
              cout<<endl;
            }
  };

  int main()
  {
    //write your code here
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
      int size;
      cin>>size;
      Heap object(size);
      int value;
      for(int i=0; i<size; ++i)
      {
        cin>>value;
        object.insert(value,i);
      }
      int extracted = object.extractMin();
      cout<<"The extracted element is "<<extracted<<"\n";
      object.print();
    }
    return 0;
  }
