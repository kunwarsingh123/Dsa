

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node()
    {
        this->data=0;
        this->next=NULL;
    }

Node(int data)
{
    this->data=data;
    this->next=NULL;
}

~Node()
{
    cout<<"delte the data"<<this->data<<endl;
}


};


void insertathead(Node* &head, Node * &tail,  int data)
{

// check for empty list

    // firstNode
if(head==NULL)
{

Node *newNode=new Node(data);
head=newNode;
tail=newNode;
return;


}




    Node * newNode=new Node(data);
    newNode->next=head;



    head=newNode;
}


// I want to onsert at tail
void insertattail(Node* &head, Node * &tail,int data)
{
   // firstNode
if(head==NULL)
{

Node *newNode=new Node(data);
head=newNode;
tail=newNode;
return;


}


Node *newNode=new Node(data);



    tail->next=newNode;



    tail=newNode;


}


void print(Node* &head)
{
    Node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int findlength(Node *&head)
{
    Node *temp=head;
    int len=0;
while(temp!=NULL)
{
    len++;
    temp=temp->next;
}
cout<<len<<endl;
return len;

}

void insertatposition(Node * &head,Node* &tail,int position,int data)
{
    if(head==NULL)
    {
        Node * newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }

// find position prev and curr;

if(position==0)
{
    insertathead(head,tail,data);
    return;
}


int findlen=findlength(head);
if(position==findlen)
{
    insertattail(head,tail,data);
    return ;
}

int i=1;
Node *prev=head;
if(i<position)
{
    prev=prev->next;
    i++;
}

Node *curr=prev->next;

Node *newNode=new Node(data);
 newNode->next=curr;
 prev->next=newNode;

}

void deletenode(Node * &head,Node *&tail,int pos)
{
    if(head==NULL)
    {
        cout<<"cannot be delete"<<endl;
        return;
    }

    // first position
    if(pos==1)
    {  
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete(temp);
        return;

    }

//last position
int lenght=findlength(head);
if(pos==lenght)
{
    // find prev
int i=1;
Node *prev =head;
while(i<pos-1)
{
    prev=prev->next;
    i++;

}
prev->next=NULL;

Node *temp=tail;

// ste[4]

tail=prev;

delete temp;

return ;

}

// position middle delete

// step1 dind prev and curr
int i=1;

Node *prev=head;
while(i<pos-1)
{
    prev=prev->next;
    i++;

}
Node*curr=prev->next;

// step 2:
prev->next=curr->next;
// step 3
curr->next=NULL;

// step 4
delete curr;





}





Node *reverse(Node * &prev,Node *&curr)
{
    if(curr==NULL)
    {
        // LL reverse ho chuki
        return prev;
    }
// 1 case solve the recursion

Node *forward =curr->next;
curr->next=prev;
reverse(curr,forward);


}


// loop
Node *reversesingleloop(Node *head)
{
    Node *prev=NULL;
    Node *curr=head;
    while(curr!=NULL)
    {
        Node *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return curr;
}


int main()
{
/*
    // head insert
    Node *head=new Node(55);
    insertathead(head,55);
    insertathead(head,7878);
    insertathead(head,4656);
    print(head);*/


Node *head=NULL;
Node *tail=NULL;
insertattail(head,tail,555);
insertattail(head,tail,4545);
insertattail(head,tail,554);
insertathead(head,tail,7880);
print(head);
cout<<endl;
findlength(head);



// insertatposition
cout<<endl;
insertatposition(head,tail,0,55);
print(head);
insertatposition(head,tail,5,789);
print(head);

// Reverse a Linklist4
cout<<endl;
cout<<"reverse a linklisrt"<<endl;
Node *prev=NULL;
Node *curr=head;

head=reverse(prev,curr);
cout<<"reverse"<<endl;
print(head);



}