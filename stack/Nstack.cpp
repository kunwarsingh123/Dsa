#include<iostream>
#include<stack>
using namespace std;
class Nstack{
    public:
     int *arr,*top,*next;
    int n;// Number of stack
    int size;// size
    int freespot; // tells free space in main array

Nstack(int n,int s)
{
    this->n=n;
    this->size=s;
    freespot=0;
    arr=new int[size];
    top=new int[n];
    next=new int[size];

    for(int i=0;i<n;i++)
    {
        top[i]=-1;
    }
    for(int i=0;i<size;i++)
    {
        next[i]=i+1;
    }
next[size-1]=-1;

}

// push x into n th stack
bool push(int x,int m)
{
    if(freespot==-1)
    {
        return false;// stack overflow
    }
    // find index
    int index=freespot;

    // update freespot
    freespot=next[index];

    // insert elemnt
    arr[index]=x;

    // next update
    next[index]=top[m-1];

    // upate top
    top[m-1]=index;

    return true; //push succesfull

}



// pop from mth stack
int pop(int m)
{
    if(top[m-1]==-1)
    {
        return -1;// stack unssderflow
    }
int index=top[m-1];
top[m-1]=next[index];
int popelement=arr[index];
next[index]=freespot;
freespot=index;
return popelement;


}

~Nstack(){
    delete[]arr;
    delete[]top;
    delete[]next;
}





}


;
int main()
{
   Nstack s(3,6);
   cout<<s.push(55,1)<<endl;
     cout<<s.push(55,1)<<endl;
      cout<<s.push(55,1)<<endl;
        cout<<s.push(55,1)<<endl;
          cout<<s.push(55,1)<<endl;
            cout<<s.push(555,2)<<endl;
              cout<<s.push(55,1)<<endl;

   cout<<s.pop(2)<<endl;
     cout<<s.push(55,1)<<endl;  cout<<s.push(55,1)<<endl;
   

}