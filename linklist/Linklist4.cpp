#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void print(Node *&head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}




Node * reverse(Node *& head)
{
     Node *prev=NULL;
     Node *curr=head;
     Node *next=curr->next;
while(curr!=NULL)
{
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}
return prev;

}




bool ispallindrom(Node *&head)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return true;
    }
if(head->next==NULL)
{
    return true;
}

// >1 Node in ll

// find the middle Node

Node *slow=head;
Node *fast=head->next;


while(fast!=NULL)
{
    fast=fast->next;
    
    if(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
}

// slow pointer is pointing to middle node

// reverse linklist after middle node

Node * reverseLinklist=reverse(slow->next);

slow->next=reverseLinklist;

// step c:comparsion lislst

Node *temp1=head;
Node *temp2=reverseLinklist;

while(temp2!=NULL)
{
    if(temp1->data!=temp2->data)
    {
        return false;
    }
    temp1=temp1->next;
    temp2=temp2->next;
}

return true;

}

void removeduplicate(Node *&head)
{
    if(head==NULL || head->next==NULL)
    {
        cout<<"Not duplicate"<<endl;
        return;
    }
   
   Node *curr=head;
   while(curr!=NULL)
   {
    if( (curr->next!=NULL)&&(curr->data==curr->next->data) )
    {
           Node *temp=curr->next;
           curr->next=curr->next->next;
           temp->next=NULL;
           delete temp;
            

    }
    else
     {  curr=curr->next;}


   }


}



void sortcount(Node *&head)
{
    int zero=0;
    int one=0;
    int two=0;

    Node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            zero++;
        }
      else   if(temp->data==1)
        {
            one++;
        }
        else{
            two++;
        }
         temp=temp->next;
    }
   
Node *temp1=head;
for(int i=0;i<zero;i++)
{
    temp1->data=0;
    temp1=temp1->next;
}
for(int i=0;i<one;i++)
{
    temp1->data=1;
    temp1=temp1->next;
}
for(int i=0;i<two;i++)
{
    temp1->data=two;
    temp1=temp1->next;
}



}




Node *sort(Node *&head)
{

if(head==NULL || head->next==NULL)
{
    return NULL;
}

    Node *zerohead=new Node(-1);
    Node*zerotail=zerohead;

    Node*onehead=new Node(-1);
    Node *onetail=onehead;

    Node *twohead=new Node(-1);
    Node *twotail=twohead;


// traverse the original linkklist

Node *curr=head;
while(curr!=NULL)
{
    if(curr->data==0)
    {
          Node*temp=curr;
          curr=curr->next;
          temp->next=NULL;

          // append the zero node in zerohead tail

          zerotail->next=temp;
          zerotail=temp;

  
    }
    else if(curr->data==1)
    {
          Node*temp=curr;
          curr=curr->next;
          temp->next=NULL;

          // append the zero node in zerohead tail

          onetail->next=temp;
          onetail=temp;

    }
    else{

          Node*temp=curr;
          curr=curr->next;
          temp->next=NULL;

          // append the zero node in zerohead tail

          twotail->next=temp;
          twotail=temp;
    }
}



// modify one wali list

Node *temp=onehead;
onehead=onehead->next;
temp->next=NULL;

delete temp;

// modify two wali list

temp=twohead;
twohead=twohead->next;
temp->next=NULL;
delete temp;


// Join the list

if(onehead!=NULL)
{
    zerotail->next=onehead;
    if(twohead!=NULL)
    {
        onetail->next=twohead;
    }
}

else{
    if(twohead!=NULL)
    {
        zerotail->next=twohead;
    }
}

// remove zerohead and dummy nodes

temp =zerohead;
zerohead=zerohead->next;
temp->next=NULL;
delete temp;


return zerohead;










}



Node *addsolve(Node *&head1,Node*&head2){

    // step1 reverse the linklist

    head1=reverse(head1);
    head2=reverse(head2);

    // add both linklist
    Node *anshead=NULL;
    Node* anstail=NULL;
    int carry=0;
    while(head1!=NULL && head2!=NULL)
    {
        // calcultate the sum
     int sum=carry+head1->data+head2->data;
     // find digit  to create node
     int digit=sum%10;
     carry=sum/10;
     // attach the newNode into ans ]wer wali linked list
     Node *newNode=new Node(digit);
     if(anshead==NULL)
     {
        // insert first Node
        anshead=newNode;
        anstail=newNode;
     }
     else{
        // insert Next Node
        anstail->next=newNode;
        anstail=newNode;
     }
     head1=head1->next;
     head2=head2->next;


    }
while(head1!=NULL)
{
    int sum=carry+head1->data;
    int digit=sum%10;
    carry=sum/10;
    Node *newNode=new Node(digit);
    anstail->next=newNode;
    anstail=newNode;
    head1=head1->next;
}
while(head2!=NULL)
{
    int sum=carry+head2->data;
    int digit=sum%10;
    carry=sum/10;
    Node *newNode=new Node(digit);
    anstail->next=newNode;
    anstail=newNode;
    head2=head2->next;
}


// carry alag se handle karna h
while(carry!=0)
{
    int sum=carry;
    int digit = sum%10;
    carry=sum/10;
    Node *newNode=new Node(digit);
    anstail->next=newNode;
    anstail=newNode;

}


return anshead;
}








int main()
{
  

  // check pallindrom 
     /*  Node*head=new Node(10);
       Node*second=new Node(20);
       Node*third=new Node(30);
       Node*fourth=new Node(20);
       Node*fifth=new Node(100);
      
       head->next=second;
       second->next=third;
       third->next=fourth;
       fourth->next=fifth;
       fifth->next=NULL;
      print(head);
      cout<<endl;
bool check= ispallindrom(head);

if(check==1)
{
    cout<<"yes it is pallindrom"<<endl;
}
else{
    cout<<"No check pallindrom"<<endl;
}
*/






//Remove duplicate Linklist
/*
 Node*head=new Node(2);
       Node*second=new Node(2);
       Node*third=new Node(2);
       Node*fourth=new Node(2);
       Node*fifth=new Node(4);
      
       head->next=second;
       second->next=third;
       third->next=fourth;
       fourth->next=fifth;
       fifth->next=NULL;

        print(head);
        cout<<endl;
        removeduplicate(head);
        print(head);
*/


// sort 0 , 1 and 2

/*
 Node*head=new Node(2);
       Node*second=new Node(2);
       Node*third=new Node(0);
       Node*fourth=new Node(1);
       Node*fifth=new Node(2);
      
       head->next=second;
       second->next=third;
       third->next=fourth;
       fourth->next=fifth;
       fifth->next=NULL;

        print(head);
        cout<<endl;
//sortcount(head);
head=sort(head);



print(head);
*/





// Add two linklsit

Node *head=new Node(2);
Node*second=new Node(3);

head->next=second;
second->next=NULL;

Node *head1=new Node(2);
Node*second2=new Node(3);
Node *third=new Node(4);

head1->next=second2;
second2->next=third;
third->next=NULL;
print(head);
cout<<endl;
print(head1);
Node *add= addsolve(head,head1);
cout<<endl;
cout<<endl;
add=reverse(add);
print(add);

}