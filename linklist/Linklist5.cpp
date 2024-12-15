#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
}
;

void print(Node *&head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


void funans(Node*&head,int &k,int &ans)
{
    if(head==NULL)
    {
        return;
    }

funans(head->next,k,ans);

if(k==0)
{
    ans=head->data;
}
k--;

}




Node *intersection(Node *&headA,Node *&headB)
{
    Node *a=headA;
    Node *b=headB;
while(a->next!=NULL && b->next!=NULL)
{
    if(a==b)
    {
        return a;
    }else{
    a=a->next;
    b=b->next;
    }
}

if(a->next==NULL)
{
    int blen=0;
    while(b->next==NULL)
    {
        blen++;
        b=b->next;
    }

    while(blen--)
    {
        headB=headB->next;
       
    }
}

if(b->next==NULL)
{
    int blen=0;
    while(a->next==NULL)
    {
        blen++;
        a=a->next;
    }

    while(blen--)
    {
        headA=headA->next;
       
    }
}

while(headA!=headB)
{
    headA=headA->next;
    headB=headB->next;
}

return headA;
}




int main()
{


// kth node from
/*
Node *head=new Node(25);
Node *second=new Node(22);
Node *third=new Node(99);
Node *fourth=new Node(10);

head->next=second;
second->next=third;
third->next=fourth;
fourth->next=NULL;




print(head);
int ans=-1;
int k=2;
funans(head,k,ans);
cout<<endl;
cout<<ans<<endl;*/











// intersection  of two Linklist

Node *head=new Node(25);
Node *second=new Node(22);
Node *third=new Node(99);
Node *fourth=new Node(10);

head->next=second;
second->next=third;
third->next=fourth;
fourth->next=NULL;

Node *head1=new Node(244);
Node*second2=new Node(54545);
Node *third2=new Node(999);
Node *fourth2=new Node(55);


head1->next=second2;
second2->next=third2;
third2->next=fourth2;
fourth2->next=second;
print(head1);
cout<<endl;

print(head);
cout<<endl;
Node *headi=intersection(head,head1);

cout<<headi<<endl;
    
}