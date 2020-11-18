#include <bits/stdc++.h>
  using namespace std;

  void heapify(int arr[], int n, int i)
  {
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] < arr[smallest])
        smallest = l;

    if (r < n && arr[r] < arr[smallest])
        smallest = r;

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
  }

  void buildHeap(int heapSize, int heap[])
  {
    int nnode = (heapSize-2)/2;
    for(int i=nnode; i>=0; i--)
    {
      heapify(heap,heapSize,i);
    }
  }

  void heapSort(int heapSize, int heap[])
  {
    for(int tempSize=heapSize-1; tempSize>0; --tempSize)
    {
        swap(heap[0],heap[tempSize]);
        heapify(heap,tempSize,0);
    }
  }

  void printHeap(int n, int arr[])
  {
    for (int i = 0; i < n; ++i)
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
      int heapSize;
      cin>>heapSize;
      int heap[heapSize];
      for(int i=0; i<heapSize; ++i)
            cin>>heap[i];

      buildHeap(heapSize,heap);
      heapSort(heapSize,heap);
      printHeap(heapSize,heap);
    }
    return 0;
  }
