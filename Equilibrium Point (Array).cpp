// { Driver Code Starts
#include <iostream>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a[n];

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {
    long long sum=0,leftSum=0;
    for(int i=0; i<n; ++i)
        sum+= a[i];
    for(int i=0; i<n; ++i)
    {
        sum = sum-a[i];
        if(sum == leftSum)
            return i+1;
        leftSum+=a[i];
    }
    return -1;
}
