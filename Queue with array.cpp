#include<bits/stdc++.h>
using namespace std;

class Queue{
    int qcapacity,qsize;
    int qfront,qrear;
    int *arr;
public: Queue(int capacity)
        {
            qfront = -1;
            qrear = -1;
            qcapacity = capacity;
            qsize = 0;
            arr = new int[qcapacity];
        }

        int frontQ()
        {
            return arr[qfront];
        }
        int rearQ()
        {
            return arr[qrear];
        }
        void push(int value)
        {

            if(qsize==qcapacity)
                cout<<"Queue is Full\n";
            else
            {
                qrear = (qrear+1)%qcapacity;
                arr[qrear]=value;
                qsize++;
                if(qfront==-1)
                {
                    qfront=(qfront+1)%qcapacity;
                }
            }
        }
        int pop()
        {
            int temp=-1;
            if(qsize==0)
                cout<<"Queue is empty\n";
            else
            {
                temp=arr[qfront];
                qfront=(qfront+1)%qcapacity;
                qsize--;
            }
            if(qsize==0)
            {
                qfront=-1;
                qrear=-1;
            }
        }
        void display()
        {
            if(qsize==0)
                cout<<"Queue is empty\n";
            else
            {
                int i=qfront;
                for(int k=0 ; k<qsize; k++,i=(i+1)%qcapacity)
                    cout<<arr[i]<<"  ";
            }
            cout<<endl;
        }
        ~Queue(){
            delete []arr;
        }
};

int main()
{
    int capacity;
    cin>>capacity;
    Queue que(capacity);
    int insertval;
    cin>>insertval;
    for(int i=0; i<insertval; ++i)
    {
        int val;
        cin>>val;
        que.push(val);
    }
    que.display();
    int deleteval;
    cin>>deleteval;
    for(int i=0; i<deleteval; ++i)
    {
        que.pop();
        que.display();
    }
    que.push(1000);
    cout<<"The new list is : ";
    que.display();
    return 0;
}
