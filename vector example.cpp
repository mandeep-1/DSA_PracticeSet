#include<iostream>
#include<vector>

using namespace std;
int main()
{
	vector<char> v(10);
	int i;
	cout<<"size= "<<v.size() << endl;
	for(i=0;i<10;i++) v[i ]=i+'a';
	cout<<"current contents :\n";
	for(i=0;i<v.size();i++) cout<<v[i]<<" ";
	return 0;
}



