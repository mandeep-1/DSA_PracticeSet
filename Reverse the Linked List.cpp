// In this 3 pointer concept has been used, solve it using 2 pointer and recursion as well.
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
            this->head=nullptr;
        }

        void insertAtEnd(int data)
        {
            SllNode *newNode = new SllNode(data);
            if(head==nullptr)
            {
                head=newNode;
                return;
            }
            SllNode *temp = head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next=newNode;
        }

        void reverseLinkedList()
        {
            SllNode *prev=nullptr;
            SllNode *curr=head;
            SllNode *right=nullptr;
            while(curr!=nullptr)
            {
                right = curr->next;
                curr->next = prev;
                prev = curr;
                curr = right;
            }
            head=prev;
        }

        void printList()
        {
            if(head==nullptr)
            {
               cout<<"List is Empty\n";
                return;
            }
            SllNode *temp = head;
            while(temp!=nullptr)
            {
                cout<<temp->data<<"  ";
                temp=temp->next;
            }
            cout<<endl;
        }
};

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        Sllist *llist = new Sllist();
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            llist->insertAtEnd(x);
        }
        llist->reverseLinkedList();
        llist->printList();
        llist->head=nullptr;
    }
}

/*
1. Use Debugging statements i.e. printing statements in between your code to check whether the pointer contains expected value or not.
2. Change the next pointer of the current node to the previous node and keep a check on the next pointer of the previous node.
3. If inserting the node at head then use the condition to check whether the head is NULL or not.
4. Define the Head of the list as a global variable and initialize it to NULL.
5. Change the Head pointer after reversing the list.*/
