#include<bits/stdc++.h>
using namespace std;

class SllNode{
 public:    int data;
            SllNode *next;
            SllNode(int data)
            {
                this->data= data;
                this->next= nullptr;
            }
};

class Sllist{
    public:   SllNode *head;
    SllList()
    {
        this->head = nullptr;
    }
    void insertAtBeg(int data)
    {
        SllNode *newNode = new SllNode(data);
        newNode->next=head;
        head=newNode;
    }
    void insertAtEnd(int data)
    {
        SllNode *newNode = new SllNode(data);
        if(head==nullptr)
        {
            head = newNode;
            return;
        }
        SllNode *temp= head;
        while(temp->next!= nullptr)
        {
            temp=temp->next;
        }
        temp->next=newNode;
      //  delete temp;
    }
    void insertAtMiddle(int pos, int data)
    {
        SllNode *newNode= new SllNode(data);
        if(head==nullptr)
        {
            head=newNode;
            return;
        }
        SllNode *temp=head;
        int counter = 1;
        while(temp->next!=nullptr && counter < pos)
        {
            temp=temp->next;
            counter++;
        }
        if(temp->next == nullptr)
        {
            temp->next=newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next =newNode;
    }
    void printList()
    {
        SllNode *temp = head;
        while(temp!= nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }

    }
};

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
     /*   int n;
        cin>>n;
        Sllist *llist = new Sllist();
        for(int i=0; i<n; i++)
        {
            int data;
            cin>>data;
            llist->insertAtBeg(data);
        }
        llist->printList();
        llist = nullptr; */

        Sllist *llist = new Sllist();
        int limit;
        cin>>limit;
        for(int i=0; i<limit; ++i)
        {
            int data;
            cin>>data;
            llist->insertAtEnd(data);
        }

        int position,data;
        cout<<"Enter the position";
        cin>>position;
        cout<<"Enter the data";
        cin>>data;
        llist->insertAtMiddle(position-1,data);
        llist->printList();
        llist=nullptr;
    }
    return 0;
}
