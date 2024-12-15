
// stl in queue
/*
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;
    q.push(55);
    q.push(90);
    q.push(89);
    q.push(89);
    cout<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<q.empty()<<endl;
    
}*/



// creation of queue
/*
#include<iostream>
#include<queue>
using namespace std;
class Queue{
     public:
    int *arr;
    int size;
    int front;
    int rear;

   
    Queue(int size)
    {
        arr=new int(size);
        this->size=size;
        front=0;
        rear=0;
    }

void push(int data)
{
    if(size ==rear)
    {
    cout<<"data is full"<<endl;
    return;
    }
else{
    arr[rear]=data;
    rear++;
}



}

void pop()
{
    if(front==rear)
    {
        cout<<"data is underflow"<<endl;
        return;
    }
    else{

        arr[front ]=-1;

        front++;
        if(front ==rear)
        {
            front =0;
            rear=0;
        }
    }
}

bool isempty()
{
    if(front == rear)
    {
        return true;
    }
    else{
        return false;
    }
}

int getfront()
{
    if(front ==rear)
    {
        cout<<"No data is present"<<endl;
    }
    else{
        return arr[front];
    }
}

int getsize()
{
    return rear-front;
}


};



int main(){

    Queue q(5);
    q.push(44);
    q.push(90);
    q.push(89);
    q.push(78);
cout<<q.getsize()<<endl;
while(!q.isempty())
{
cout<<q.getfront()<<endl;
q.pop();


}



}

*/



// circular queue
/*

#include<iostream>
using namespace std;
class Circularqueue{
    public:

int *arr;
int size;
int front;
int rear;

Circularqueue(int size)
{
    arr=new int[size];
    this->size=size;
    front=-1;
    rear=-1;
}

void push(int data)
{
    // Queue full
    if(front ==0 && rear==size-1)
    {
     cout <<"queue is full"<<endl;
     return;
    }
// single case vaala 
if(front ==-1 && rear==-1)
{
    front =rear=0;
    arr[front]=data;
}

// circular nature
else if(rear==size-1 && front !=0)
{
    rear=0;
    arr[rear]=rear;
    rear++;
}
rear++;
arr[rear]=data;

}


void pop()
{
    // empty check
    // single elment
    // circular nature
    // norma;l flow

    if(front==-1 && rear==-1)
    {
        cout<<"no data is present"<<endl;
        return ;

    }
   else if(front==rear)
   {
    arr[front ]=-1;
    front =-1;
    rear=-1;
   }
else if( front==size-1)

{

 front =0;
}

else{
    arr[front]=-1;
    front ++;
}

}


int getfront ()
{
    return arr[front];
}

bool isempty()
{
    if(front==-1 && rear==-1)
    {
        return true;
    }
    else {
        return false;
    }
}

int getsize()
{
    return rear-front +1;
}


};

int main()
{
    Circularqueue q(6);
    q.push(55);
     q.push(55);
      q.push(55);
       q.push(55);
        q.push(55);
        cout<<q.getsize()<<endl;
        cout<<q.isempty()<<endl;
        while(!q.isempty())
        {
            cout<<q.getfront()<<endl;
            q.pop();
        }
        q.push(99);
        cout<<q.getfront()<<endl;
        }*/



//  dequeue

/**
  #include <iostream>
using namespace std;

class Deque {
public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void pushrear(int data) {
        // Queue full condition
        if ((rear + 1) % size == front) {
            cout << "Queue is full" << endl;
            return;
        }
        // Single element case
        if (front == -1) {
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) { // Circular nature
            rear = 0;
        } else { // Normal case
            rear++;
        }
        arr[rear] = data;
    }

    void pushfront(int data) {
        // Queue full condition
        if ((rear + 1) % size == front) {
            cout << "Queue is full" << endl;
            return;
        }
        // Single element case
        if (front == -1) {
            front = rear = 0;
        } else if (front == 0) { // Circular nature
            front = size - 1;
        } else { // Normal case
            front--;
        }
        arr[front] = data;
    }

    void popfront() {
        // Empty check
        if (front == -1) {
            cout << "No data is present" << endl;
            return;
        }
        arr[front] = -1; // Clear the element
        if (front == rear) { // Single element case
            front = rear = -1;
        } else if (front == size - 1) { // Circular nature
            front = 0;
        } else {
            front++;
        }
    }

    void poprear() {
        // Empty check
        if (front == -1) {
            cout << "No data is present" << endl;
            return;
        }
        arr[rear] = -1; // Clear the element
        if (front == rear) { // Single element case
            front = rear = -1;
        } else if (rear == 0) { // Circular nature
            rear = size - 1;
        } else {
            rear--;
        }
    }

    int getfront() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int getrear() {
        if (rear == -1) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    bool isempty() {
        return (front == -1);
    }
};

int main() {
    Deque q(5);

    q.pushfront(10);
    q.pushrear(20);
    q.pushfront(5);
    q.pushrear(30);

    cout << "Queue contents from front to rear:" << endl;

    while (!q.isempty()) {
        cout << q.getfront() << " ";
        q.popfront(); // Remove elements from front
    }
    cout << endl;

    return 0;
}
*/


// stl dequeue

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>p;
    p.push_front(9);
    p.push_back(90);
     p.push_front(9);
    p.push_back(90); p.push_front(9);
    p.push_back(90);
    cout<<p.front()<<endl;
    cout<<p.back()<<endl;
    
  

}