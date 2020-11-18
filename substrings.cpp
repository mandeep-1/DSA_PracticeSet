// C++ program to print all possible 
// substrings of a given string 
#include<bits/stdc++.h> 
#include<cstring>
using namespace std; 

// Function to print all sub strings 
void subString(string s, int n) 
{ 
	// Pick starting point in outer loop 
	// and lengths of different strings for 
	// a given starting point 
	
	string temp;
	for (int i=0;i<n;i++) 
	{
		for (int len = 1; len <= n - i; len++) 
		{
			temp+=s.substr(i, len);
	    }
	}
	cout<<endl<<temp;
	
	//AMLH: for loop should work till the max number(999..... digits of that string). Maine filhal 9 testing k liye rakhi hui h
	for(int k=0;k<9;k++)
	{
			int p=temp.find('k');
			//AMLH: Main problem ye h ki find function nahi chal rha or mujhe chalana nhi aa rha
			if(p==string::npos)
			{
					cout<<"\nSmallest missing nummber in substring is "<<k;
					break;
			}
	}
	
} 

// Driver program to test above function 
int main() 
{ 
	string s;
	cout<<"Enter string";
	cin>>s; 
	subString(s,s.length()); 
	return 0; 
} 

