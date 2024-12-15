#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
      this->  next=NULL;
    }
};

void print(Node * &head)
{
    Node *temp=head;
    while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
}



// find middle Node

Node *getMiddle(Node * &head)
{
    if(head==NULL)
    {
        cout<<"empty Linklist"<<endl;
        return head;
    }
if(head->next==NULL)
{
    return head;
    }


// Linklist have >1Node
    Node *slow =head;
    Node *fast=head;

    while(slow!=NULL && fast !=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
return slow;
}

int getlen(Node *&head)
{
    int len=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

// Nodes of reverse endl


Node *reversekthnode(Node *&head,int k)
{
    if(head==NULL)
    {
        cout<<"Linklist is empty";
        return NULL;

    }

    int len =getlen(head);

    if(k>len)
    {
        cout<<"Enetr a valid value for k"<<endl;
        return head;
    }

// it means number of nodes in Linklist is >=k
// step A :reverse first k nodes of LL

Node *prev=NULL;
Node * curr=head;
Node *forward=curr->next;
int count=0;

while(count<k)
{
    forward=curr->next;
    curr->next= prev;
    prev=curr;
    curr=forward;
    count++;
}

// step B:recursive call 
if(forward!=NULL)
{
// we still have nodes left to reverse
head->next=reversekthnode(forward,k);
}


// return head 
return prev;


}

void printcircularlinklist(Node* &head)
{
    if (head == nullptr) // Check if the list is empty
        return;
   Node * temp=head;
   cout<<temp->data<<" ";
   temp=temp->next;
   while(temp!=head)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
}

bool checkcircularlist(Node *&head)
{
    if(head==nullptr)
    {
        return false;
    }
    if(head->next==NULL)
    {
        return false;
    }
    Node *temp=head;
    temp=temp->next;
   while(temp!=head && temp!=NULL)
   {
    temp=temp->next;
    
         
   }
   if(temp==head)
   {
    return head;
   }

   return false;
     


}








// detect and check loop
bool checkLoop(Node *&head)
{
    if(head==NULL)
    {
        cout<<"linklist is empty"<<endl;
        return false;
    }

Node *slow=head;
Node *fast=head;

while(fast!=NULL)
{
    fast=fast->next;
    if(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
if(fast==slow)
{
    // loop present
    return true;
}

}

return false;

}


// find starting point of loop

Node *startingpointLoop(Node * &head)
{
    if(head==NULL)
    {
        cout<<"Linklidt is empty"<<endl;
        return NULL;
    }
Node *fast=head;
Node *slow=head;

while(fast!=NULL)
{
    fast=fast->next;
    if(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }

    if(slow==fast)
    {
        slow=head;
        break;
    }

}

while(slow!=fast)
{
    slow=slow->next;
    fast=fast->next;
}
return slow;

}



// remove loop 

Node *removepointLoop(Node * &head)
{
    if(head==NULL)
    {
        cout<<"Linklidt is empty"<<endl;
        return NULL;
    }
Node *fast=head;
Node *slow=head;


while(fast!=NULL)
{
    fast=fast->next;
    if(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }

    if(slow==fast)
    {
        slow=head;
        break;
    }

}

Node *prev=fast;
while(slow!=fast)
{
    prev=fast;
    slow=slow->next;
    fast=fast->next;
}
prev->next=NULL;
return slow;

}



int main()
{

    /*
       Node*head=new Node(10);
       Node*second=new Node(55);
       Node*third=new Node(7410);
       Node*fourth=new Node(610);
       Node*fifth=new Node(190);
       Node *sixth=new Node(789);
       head->next=second;
       second->next=third;
       third->next=fourth;
       fourth->next=fifth;
       fifth->next=sixth;
       sixth->next=NULL;
       print(head);

        cout<<"Middle node of list"<<endl;
cout<<getMiddle(head)->data<<endl;

cout<<endl;
cout<<"kth node of reverse"<<endl;
head=reversekthnode(head,3);
print(head);*/







// check circular linklist


     /*  Node*head=new Node(10);
       Node*second=new Node(55);
       Node*third=new Node(7410);
       Node*fourth=new Node(610);
       Node*fifth=new Node(190);
       Node *sixth=new Node(789);
       head->next=second;
       second->next=third;
       third->next=fourth;
       fourth->next=fifth;
       fifth->next=sixth;
       sixth->next=head;
      // print(head);
     //  printcircularlinklist(head);
      bool checkcircular=checkcircularlist(head);
      cout<<endl<<endl;
      cout<<checkcircular<<endl;*/





// check and detect loop

 Node*head=new Node(10);
       Node*second=new Node(55);
       Node*third=new Node(7410);
       Node*fourth=new Node(610);
       Node*fifth=new Node(190);
       Node *sixth=new Node(789);
        Node *seventh=new Node(789);
         Node *eight=new Node(789);
          Node *nine=new Node(789);
       head->next=second;
       second->next=third;
       third->next=fourth;
       fourth->next=fifth;
       fifth->next=sixth;
       sixth->next=seventh;
       seventh->next=eight;
       eight->next=nine;
       nine->next=fifth;
      // print(head);
cout<<checkLoop(head)<<endl;



// find starting point of loop

cout<<endl;
cout<<startingpointLoop(head)->data<<endl;
cout<<removepointLoop(head)<<endl;
cout<<checkLoop(head)<<endl;

}