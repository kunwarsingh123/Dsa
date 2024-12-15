
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
        int *arr=new int(size);
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
    arr[rear]=rear;
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
    if(front ==size)
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



}