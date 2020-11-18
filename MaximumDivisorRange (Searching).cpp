#include <bits/stdc++.h>
  using namespace std;
  int gcd(int a, int b)
  {
      if(a==0)
        return b;
      if(b==0)
        return a;
      else
        return gcd(b%a, a);
  }

  void allFactors(vector <int> &fact, int a, int b, int hcf)
  {
      for(int i=1; i<=hcf; ++i)
          if(hcf%i==0)
            fact.push_back(i);

      sort(fact.begin(), fact.end());
  }
  findMaxDivisor(int low , int high , int left , int right , int length, vector <int> arr)
  {
    if(left > right)
      return -1;
    int mid = left + (right - left)/2;
    if(arr[mid] == high)
      return arr[mid];
    if(arr[mid] < high  && (mid == length || arr[mid+1] > high) && low < arr[mid])
      return arr[mid];
    if(arr[mid] > high)
    	return findMaxDivisor(low ,high ,left ,mid-1 ,length, arr);
    else
    	 return findMaxDivisor(low ,high ,mid+1 ,right ,length, arr);
  }
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int x = gcd(a,b);
        cout<<"Gcd="<<x<<"\n";
        vector <int> fact;
        allFactors(fact,a,b,x);

        for(int i=0; i<fact.size(); ++i)
            cout<<fact[i]<<" ";
        cout<<endl;

        int q, low, high;
        cin>>q;
        while(q--)
        {
            cin>>low>>high;
            int ans=findMaxDivisor(low, high, 0, fact.size()-1, fact.size()-1, fact);
            cout<<"Answer is "<<ans<<endl;
        }
    }

    return 0;
  }
