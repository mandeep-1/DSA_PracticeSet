#include <iostream>
#include<queue>

using namespace std;

void leftRotation(){
    int n,d;
    cin>>n>>d;
    int x;
    queue <int> myQ;
    for(int i=0;i<n;i++){
        cin>>x;
        myQ.push(x);
    }
    for(int i=0;i<d;i++){
        x=myQ.front();
        myQ.pop();
        myQ.push(x);
    }
    while(!myQ.empty()){
        cout<<myQ.front()<<" ";
        myQ.pop();
    }
}

int main(){
	leftRotation();
	return 0;
}

