#include <bits/stdc++.h>
using namespace std;

string checkComplex(string s)
{
	int l = s.length();
	int i;
	if (s.find('+') < l) {
		i = s.find('+');
	}
	else {
		i = s.find('-');
	}
	int j= s.find('i');
	int k= s.find('j');
	if(i!=string::npos && (j!=string::npos || k!=string::npos))
        return "true";
	else
        return "false";
}
int main()
{
	string str;
	getline(cin,str);
	cout<<checkComplex(str)<<endl;
	return 0;
}
