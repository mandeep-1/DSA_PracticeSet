#include <bits/stdc++.h>

using namespace std;

// Function to invert bits of a number
uint32_t invertBits(uint32_t n)
{
	// Calculate number of bits of N-1;
	uint32_t x = log2(n) ;
    cout<<"Number of bits =  "<<x<<endl;
	uint32_t m = 1 << x;
	cout<<"m = 1<<x is       "<<m<<endl;
	m = m | m - 1;
	cout<<"m = m | m - 1 is  "<<m<<endl;
	n = n ^ m;
	cout<<"n = n ^ m is      "<<n<<endl;
	return n;
}

// Driver code
int main()
{
	int tc;
    cin>>tc;
    while(tc--)
    {
        uint32_t num;
        cin>>num;
        uint32_t x = invertBits(num);
        cout << "Reverse is    "<<x<<endl;
    }
	return 0;
}
