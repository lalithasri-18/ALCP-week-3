#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
bool detectCycle(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;
}
int main()
{
    int n,x,pos;
    Node *head=NULL,*last=NULL;
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter node values: ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        Node* newNode=new Node(x);
        if(head==NULL)
            head=newNode;
        else
            last->next=newNode;
        last=newNode;
    }
    cout<<"Enter cycle position (0 for no cycle): ";
    cin>>pos;
    if(pos>0 && pos<=n)
    {
        Node* temp=head;
        for(int i=1;i<pos;i++)
            temp=temp->next;
        last->next=temp;
    }
    if(detectCycle(head))
        cout<<"Cycle is present";
    else
        cout<<"Cycle is not present";
    return 0;
}
