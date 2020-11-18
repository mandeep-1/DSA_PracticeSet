/*
The first line contains an integer
T
, denoting the number of test cases.
For each test case,
The first line contains an integer
N
.
The second line contains
N
 space-separated integers, denoting the position of Nishant and his friends.
The third line contains
N
 space-separated integers, denoting the position of shelters.

Output format
Print the minimum value of time in a new line for every test case.

Constraints:
1
<=
T
<=
10

1
<=
N
<=
10
5

Example
Input
1
5
1 2 3 4 5
9 5 6 10 12

Output
7
*/
#include <bits/stdc++.h>
  using namespace std;

  int findMinTime(int num,int pos[],int shelter[])
  {
    int diff=0;
    for(int i=0; i<num; ++i)
    {

      diff = max(diff, abs(pos[i]-shelter[i]));
   //   cout<<pos[i]<<"   "<<shelter[i]<<"  "<<diff<<"\n";
    }
    return diff;
  }

  int main()
  {
    //write your code here
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
      int num;
      cin>>num;
      int pos[num],shelter[num];
      for(int i=0; i<num; i++)
            cin>>pos[i];
      for(int i=0; i<num; i++)
            cin>>shelter[i];
      sort(pos,pos+num);
      sort(shelter,shelter+num);
      int ans = findMinTime(num,pos,shelter);
      cout<<ans<<"\n";
    }
    return 0;
  }
