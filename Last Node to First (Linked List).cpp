#include<bits/stdc++.h>
using namespace std;

class SllNode{
public: int data;
        SllNode *next;
        SllNode(int data)
        {
            this->data = data;
            this->next = nullptr;
        }
};

class Sllist{
public: SllNode *head;
        Sllist()
        {
            this->head = nullptr;
        };
        void insertAtEnd(int data)
        {
            SllNode *newNode = new SllNode(data);
            if(head == nullptr)
            {
                head = newNode;
                return;
            }
            SllNode *temp = head;
            while(temp->next != nullptr)
            {
                temp=temp->next;
            }
            temp->next=newNode;
        }
        void printList()
        {
            if(head==nullptr)
            {
                cout<<"The list is empty, Try inserting elements \n";
                return;
            }
            SllNode *temp= head;
            while(temp!=nullptr)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<"\n";
        }
        void lastToEnd()
        {
            if(head==nullptr || head->next==nullptr)
            {
                cout<<"Not Possible\n";
                return;
            }
            SllNode *temp = head;
            while(temp->next->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next->next=head;
            head=temp->next;
            temp->next=nullptr;
        }
};

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        Sllist *llist= new Sllist();
        int n;
        cin>>n;
        for(int i=0; i<n; ++i)
        {
            int x;
            cin>>x;
            llist->insertAtEnd(x);
        }
        cout<<"The list created is ";
        llist->printList();
        llist->lastToEnd();
        cout<<"The list after modification is ";
        llist->printList();
        llist=nullptr;
    }
    return 0;
}
