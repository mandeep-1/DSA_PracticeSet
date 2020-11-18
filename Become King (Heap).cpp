#include <bits/stdc++.h>
  using namespace std;

  int personCount;

  int left(int index)
  {
    return 2*index+1;
  }
  int right(int index)
  {
    return 2*index+2;
  }
  int parent(int index)
  {
    return (index-1)/2;
  }
  void heapify(int index,int arr[])
  {
    int smaller=index;
    int l=left(index);
    int r=right(index);
    if(l<personCount && arr[l]<arr[index])
      smaller=l;
    if(r<personCount && arr[r]<arr[smaller])
      smaller=r;
    if(smaller!=index)
    {
      swap(arr[index],arr[smaller]);
      heapify(smaller,arr);
    }
  }
  void buildHeap(int arr[])
  {
    for(int i= parent(personCount-1); i>=0; --i)
    {
      heapify(i,arr);
    }
  }
  int extractMinHeap(int arr[])
  {
    int minHeap=arr[0];
    arr[0]=arr[personCount-1];
    personCount--;
    heapify(0,arr);
    return minHeap;
  }
  int insertHeap(int newPower,int arr[])
  {
    int index=personCount;
    arr[index]=newPower;
    personCount++;
    int p=parent(index);
    while(p>=0 && arr[p]>arr[index])
    {
      swap(arr[p],arr[index]);
      index=p;
      p=parent(index);
    }
  }
  void powerNeeded(int arr[])
  {
    int minPower=0, newPower=0;
    while(personCount>=2)
    {
      int a = extractMinHeap(arr);
      int b = extractMinHeap(arr);
      newPower = a+b;
      minPower = minPower + newPower;
      insertHeap(newPower,arr);
    }
    cout<<minPower<<endl;
  }
  void print(int arr[])
  {
    for(int i=0; i<personCount; ++i)
       cout<<arr[i]<<" ";
              cout<<endl;
  }

  int main()
  {
    //write your code here
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
      cin>>personCount;
      int arr[personCount];
      for(int i=0; i<personCount; ++i)
          cin>>arr[i];
      buildHeap(arr);
     // print(arr);
      powerNeeded(arr);
    }
    return 0;
  }
  /*
If the length of the array equals one, the output will be always zero.
Every time you need to find the minimum two values.
Take some test cases and verify your logic first.
See how using MIN HEAP can be useful for this problem.
  */
