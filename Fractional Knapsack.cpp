#include <bits/stdc++.h>
  using namespace std;

  struct Item
  {
    int weight;
    int value;
    double ratio;
  };

  bool myComparator(Item a, Item b)
  {
    return a.ratio > b.ratio;
  }

  double findMaximumValue(Item list[], int num, int sackCapacity)
  {
    sort(list, list+num, myComparator);

    double currWeight=0, maxValue=0;
    for(int i=0; i<num && currWeight<=sackCapacity; ++i)
    {
      if(list[i].weight + currWeight <= sackCapacity)
      {
        maxValue  = maxValue + list[i].value;
        currWeight = list[i].weight + currWeight;
      }
      else
      {
          maxValue  = maxValue + (double)((double)list[i].ratio * (double)(sackCapacity-currWeight));
          currWeight = currWeight + (sackCapacity-currWeight);
          break;
      }
    }
    return maxValue;
  }

  int main()
  {
    //write your code here
    int numOfItems, sackCapacity;
    cin>>numOfItems>>sackCapacity;

    Item list[numOfItems];

    for(int i=0; i<numOfItems; ++i)
    {
      cin>>list[i].value>>list[i].weight;
      list[i].ratio = (double)((double)list[i].value/(double)list[i].weight);
    }

    double maxValue = findMaximumValue(list,numOfItems, sackCapacity);
    cout<<round(maxValue);
    return 0;
  }
