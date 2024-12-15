#include<iostream>
#include<stack>
using namespace std;

/*
// creation of stack
class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        arr=new int[size];
        this->size=size;
        top=-1;
    }
void push(int data)
{
if(size-top>1)
{
    // space available

    top++;
    arr[top]=data;

}
else{
    cout<<"stack is overflow"<<endl;
}
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack is underflow"<<endl;
    }
    else{
        top--;
    }
}

int gettop()
{
    if(top>-1)
    {
        return arr[top];
    }
    else{
        return -1;
    }
}

int getsize()
{
    return (top-1);
}

bool isempty()
{
    if(top==-1)
    {
        return true;
    }
    else{
        return false;
    }
}

*/

// Two array in one stack

class Stack2{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack2(int size)
    {
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;

    }
    
void push1(int data)
{
     if(top2-top1==1)
     {
        cout<<"no space available";
        return;
     }
     else{
top1++;
arr[top1]=data;

     }
}
void pop1(){

if(top1==-1)
{
    cout<<"stack is underflow";
    return;
}
else{
    top1--;
}


}


void push2(int data){
if(top2-top1==1)
{
    cout<<"no space is available"<<endl;
    return;
}
else{
      top2--;
    arr[top2]=data;
  
}


}
void pop2(){
    if(top2==size)
    {
        cout<<"no data is present"<<endl;
        
    }
    else{
        top2++;
    }

}


void print()
{

cout<<endl;
cout<<"top1:"<<top1<<endl;
cout<<"top2:"<<top2<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
};













// function1

void findmiddle(stack<int>&s,int &totalsize){
    if(s.size()==0)
    {
        cout<<"no element present"<<endl;
        return;
    }
    if(s.size()==totalsize/2+1)
    {
        cout<<"middle node:"<<s.top()<<" ";
        return ;
    }

    int temp=s.top();
    s.pop();
    findmiddle(s,totalsize);
    s.push(temp);
}

int main()
{
/*
// create a stack
stack<int>s;
s.push(55);
s.push(121);
s.push(99);
s.push(789);
cout<<s.size()<<endl;
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}

cout<<s.empty()<<endl;
*/




// create stack in array endll;
// int top=5;
/*
Stack st(10);
st.push(5);
st.push(90);
st.push(9999);
cout<<st.gettop()<<endl;
cout<<st.isempty()<<endl;
while(!st.isempty())
{
    cout<<st.gettop()<<endl;
    st.pop();

}

*/


/*


// 1 array in two stack

Stack2 st(6);
st.push1(44);
st.print();
st.push2(99);
st.print();
st.push1(9900);
st.print();
st.push2(100);
st.print();

st.push1(44);
st.print();
st.push2(99);
st.print();
st.push1(9900);
st.print();
st.push2(100);

*/



//reverse of string

string s="lovebabbar";
stack<char>ss;
for(int i=0;i<s.size();i++)
{
    ss.push(s[i]);
}

while(!ss.empty())
{
    cout<<ss.top()<<endl;
    ss.pop();
}




// find middle in a stack
stack<int>st1;
st1.push(74);
st1.push(78);
st1.push(888);
st1.push(900);
st1.push(9001);
st1.push(99);
int total=st1.size();
findmiddle(st1,total);


} 