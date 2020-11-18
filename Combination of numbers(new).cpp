#include <bits/stdc++.h>
using namespace std;

void combi(int arr[], int n, int k,int index, int temp[], int i)
{
    if (index == k)
    {
        for (int j = 0; j < k; j++)
            cout << temp[j] << " ";
        cout << endl;
        return;
    }

    if (i >= n)
        return;

    temp[index] = arr[i];
    combi(arr, n, k, index + 1, temp, i + 1);
    combi(arr, n, k, index, temp, i+1);
}

int main()
{
    int n ;  cin>>n;
    int arr[n];
    for(int i=0; i<n; ++i)
		cin>>arr[i];
	int k;   cin>>k;
	int temp[k];
	combi(arr, n, k, 0, temp, 0);
}
