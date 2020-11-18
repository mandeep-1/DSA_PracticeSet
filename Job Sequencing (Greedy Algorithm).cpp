#include <bits/stdc++.h>
  using namespace std;

    struct Job
    {
        int id,deadline,profit;
    };

    bool mycomparator(Job a, Job b)
    {
       return (a.profit > b.profit);
    }

    void jobScheduling(Job arr[],int tasks)
    {
      sort(arr,arr+tasks,mycomparator);

      bool slots[tasks]={false};
      int answer = 0;

    for(int i=0; i<tasks; ++i)
      {
        if(slots[arr[i].deadline-1]==false)
        {
          slots[arr[i].deadline-1]=true;
          cout<<"Job "<<arr[i].id<<" scheduled at "<<arr[i].deadline-1<<"\t\t\tProfit :"<<arr[i].profit<<endl;
          answer = answer+ arr[i].profit;
        }
        else
        {
          for(int j=arr[i].deadline-1; j>=0; j--)
          {
            if(slots[j]==false)
            {
              slots[j]=true;
              answer = answer+arr[i].profit;
              break;
            }
          }
        }
      }
      cout<<answer;
    }
  int main()
  {
    //write your code here
    int tasks;
    cin>>tasks;

    Job job[tasks];

    for(int i=0; i<tasks; ++i)
          cin>>job[i].id>>job[i].deadline>>job[i].profit;
    jobScheduling(job, tasks);

    return 0;
  }/*
  4
1 2 50
2 2 60
3 3 20
4 3 30
*/
