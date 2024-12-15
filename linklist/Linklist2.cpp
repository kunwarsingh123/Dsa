#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        cout<<"delete the node"<<this->data<<endl;
    }
};

void print(Node *&head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getlen(Node *&head) {
    int len = 0;
    Node *newnode = head;
    while (newnode != NULL) {
        newnode = newnode->next;
        len++;
    }
    return len;
}

void insertathead(Node *&head, Node *&tail, int data) {
    if (head == NULL) {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void inserattail(Node *&head, Node *&tail, int data) {
    if (head == NULL) {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }

    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertatposition(Node *&head, Node *&tail, int data, int position) {
    if (position == 1) {
        insertathead(head, tail, data);
        return;
    }

    int len = getlen(head);
    if (position > len) {
        inserattail(head, tail, data);
        return;
    }

    // Insert at middle
    Node *prevnode = head;
    int i = 1;
    while (i < position - 1) {
        prevnode = prevnode->next;
        i++;
    }

    Node *currNode = prevnode->next;
    Node *temp = new Node(data);

    prevnode->next = temp;
    temp->prev = prevnode;
 currNode->prev = temp;
    temp->next = currNode;
  
}


void deletefromPos(Node * &head,Node *&tail,int pos)
{
    if(head==NULL)
    {
        cout<<"Not delete Linkedlist"<<endl;
        return;
    }

if(head->next==NULL)
{
    Node *temp=head;
    head=NULL;
    tail=NULL;
    delete temp;
    return;
}

if(pos==0)
{
    Node *temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;
    return;
}

int len=getlen(head);

if(pos==len)
{
    Node  *temp=tail;
    tail=tail->prev;
    temp->prev=NULL;
    tail->next=NULL;
    delete temp;
    return;

}



// delete middle node

// step1 :find left ,right,curr
int i=1;
Node *left=head;
while(i<pos-1)
{
    left=left->next;
    i++;

}

Node *curr=left->next;
Node* right=curr->next;

left->next=right;
right->prev=left;

curr->next=NULL;
curr->prev=NULL;

delete curr;

}




int main() {
    Node *first = new Node(10);
    Node *second = new Node(55);
    Node *third = new Node(999);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    Node *head = first;
    Node *tail = third;

    cout << "Initial List: ";
    print(head);

    cout << "After inserting at head: ";
    insertathead(head, tail, 546);
    print(head);

    cout << "After inserting at tail: ";
    inserattail(head, tail, 654);
    print(head);

    cout << "After inserting at position 3: ";
    insertatposition(head, tail, 741, 12);
    print(head);


cout<<"insertatdelete:"<<endl;

deletefromPos(head,tail,6);
print(head);



    return 0;
}
