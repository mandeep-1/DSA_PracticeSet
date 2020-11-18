// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> um;


int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0 ; i < n ; ++ i )
            cin >> arr[i] ;

        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}
// } Driver Code Ends


//User function template in C++


// arr : given array
// n : size of the array

int firstRepeated(int arr[], int n) {
    //code here
    vector <int> vec;
    int ans=0,found=10000000, count=0;
    //1 4 2 3 5 4
    for(int i=0; i<n; ++i)
    {

        for(int j=0; j<vec.size(); ++j)
        {
            if(vec[j]==arr[i])
            {
                count=1;
                ans=min(j,found);
                found=j;
            }
        }

        if(count!=1)
            vec.push_back(arr[i]);
    }
    if(count==0)
        return -1;
    else
    return ans+1;
}
