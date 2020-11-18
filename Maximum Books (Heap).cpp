#include <bits/stdc++.h>
  using namespace std;

  int heapSize;

  void heapify(int arr[], int i)
  {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < heapSize && arr[l] < arr[largest])
       largest = l;

    if (r < heapSize && arr[r] < arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, largest);
    }
  }

  void buildHeap(int heap[])
  {
    int nnode = (heapSize-2)/2;
    for(int i=nnode; i>=0; i--)
    {
      heapify(heap,i);
    }
  }

  int extractMax(int heap[])
  {
    int maxElement = heap[0];
    swap(heap[0],heap[heapSize-1]);
    heapSize--;
    heapify(heap,0);
    return maxElement;
  }

  void printHeap(int arr[])
  {
    for (int i = 0; i < heapSize; ++i)
        cout << arr[i] << " ";
    cout << "\n";
  }

  int main()
  {
    //write your code here
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
      int cost;
      cin>>heapSize>>cost;
      int heap[heapSize];
      for(int i=0; i<heapSize; ++i)
            cin>>heap[i];

      buildHeap(heap);
      int lar,counter=0;
      while(cost>=0)
      {
        lar=extractMax(heap);
        cost=cost-lar;
        if(cost>=0)
          counter++;
      }

      cout<<counter<<"\n";
    }
    return 0;
  }
