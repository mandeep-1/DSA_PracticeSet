#include <bits/stdc++.h>
  using namespace std;

  void 	comboNumber(string str1, int arr[], int k, int n, int curIndex,int len)
  {
  	if(len==k)
  	{
  	    cout<<str1<<endl;
  	}

    else{
        for(int i=curIndex+1; i<n; ++i)
        {
            string str2 = to_string(arr[i]);
            comboNumber(str1+" "+str2, arr, k, n, i,len+1);
        }
    }
  }

  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n;
    	int arr[n];
    	for(int i=0; i<n; i++)
            cin>>arr[i];
        cin>>k;
        for(int i=0; i<n; ++i)
        {
            string str1 = to_string(arr[i]);
            comboNumber(str1, arr, k, n, i,1);
        }
	}
    return 0;
  }

