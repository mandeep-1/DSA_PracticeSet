#include <iostream>
using namespace std;
int main(){
	int n1=100000;
	cout<<"\n int n = 100000                           "<< long (n1*n1);
	long long n2 = 100000*100000;
	cout<<"\n long long n = 100000*100000              "<< n2;
	long long n3 = (long long)100000*100000;
 	cout<<"\n long long n = (long long)100000*100000   "<< n3;
	long long n4 = (long long)(100000*100000);
	cout<<"\n long long n = (long long)(100000*100000) "<< n4;
	return 0;
}
