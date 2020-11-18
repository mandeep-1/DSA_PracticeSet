// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout <<"Location : "<< transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


// Function to find the transition point
int transitionPoint(int arr[], int n) {
    // code here
    int start=0, last =n-1;
    while(start <= last)
    {
        int mid=start + ((last - start)/2);
        cout<<"Mid : "<<mid<<endl;
        if((mid==0 && arr[mid]==1) || ((mid!=0 )&& (arr[mid]==1) && (arr[mid-1]==0)))
            return mid;
        else if(arr[mid]==0)
            start = mid+1;
        else
            last = mid-1;
    }
    return -1;

}
