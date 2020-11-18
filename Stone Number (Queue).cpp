   #include<bits/stdc++.h>
using namespace std;

class Queue{
        int qcapacity,qsize;
        vector <int> vec;
        int qfront,qrear;
    public: Queue(int capacity)
            {
                qcapacity = capacity;
                qfront = -1;
                qrear = -1;
                vec.resize(qcapacity);
                qsize=0;
            }
            int sizeQ()
            {
                return qsize;
            }
            int frontQ()
            {
                return qfront;
            }
            int rearQ()
            {
                return qrear;
            }
            bool isEmpty()
            {
                return qsize==0;
            }
            bool isFull()
            {
                return qsize==qcapacity;
            }
            void pushQ(int value)
            {
                if(isFull())
                {
                    cout<<"Queue is full\n";
                    return;
                }
                qrear = (qrear+1) % qcapacity;
                vec[qrear] = value;
                qsize++;
                if(qfront == -1)
                    qfront++;
            }
            int popQ()
            {
                if(isEmpty())
                {
                    cout<<"Queue is empty\n";
                    return INT_MIN;
                }
                int temp=vec[qfront];
                qfront = (qfront+1)%qcapacity;
                qsize--;
                if(qsize==0)
                {
                    qfront=qrear=-1;
                }
                return temp;
            }
            void display()
            {
                cout<<"The Queue is : ";
                for(int i=0; i<sizeQ(); ++i)
                    cout<<vec[i+qfront]<<" ";
                cout<<endl;
            }
};

Queue reverseQ(Queue q1)
{
    int s = q1.sizeQ();
    Queue q2(s);
    int temp;
    for(int i=0; i<s; ++i)
    {
        for(int j=0; j<q1.sizeQ()-1; j++)
        {
            temp = q1.popQ();
            q1.pushQ(temp);
        }
        temp=q1.popQ();
        q2.pushQ(temp);
    }
    while(!q2.isEmpty())
    {
        temp=q2.popQ();
        q1.pushQ(temp);
    }
    return q1;
}

int stoneNumber(Queue q1)
{
    int temp;
    while(!q1.isEmpty())
    {
        temp = q1.popQ();
        q1.pushQ(temp);
        if(q1.sizeQ()!=1)
            q1.popQ();
        else
            return temp;
    }
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        Queue q1(n);
        for(int i=1; i<=n; ++i)
        {
            q1.pushQ(i);
        }
        int ans = stoneNumber(q1);
        cout<<ans<<endl;
    }
    return 0;
}

