// C++ program to print all possible 
// substrings of a given string 
#include<bits/stdc++.h> 
#include<string>
#include<cstring>
#include<math.h>
using namespace std; 
string temp="";

// Function to print all sub sequence
	

string printSubSeqRec(string str, int n, 
           int index = -1, string curr = "") 
{ 
    // base case 
    if (index == n)  
        return "0"; 
    
    for (int i = index + 1; i < n; i++) { 
   
        curr += str[i]; 
        temp+=curr;
        printSubSeqRec(str, n, i, curr); 
    
        // backtracking 
        curr = curr.erase(curr.size() - 1);  
    } 
    
    return temp; 
} 
   
// Generates power set in lexicographic 
// order. 
string printSubSeq(string digits) 
{ 
	int n=digits.length();
	string str;
    temp=printSubSeqRec(digits,n);
	 
	for(int i=0;i<pow(10,digits.size());i++)
	{
		str=to_string(i);
		size_t f=temp.find(str);
		if(!(f!=string::npos))
		{
			cout<<endl<<str<<" Not found in substring"<<endl;
			break;
		}
	}
	return str;
}
int main() 
{ 
	string s;
	cout<<"Enter string";
	cin>>s;
	printSubSeq(s);
	return 0; 
} 

