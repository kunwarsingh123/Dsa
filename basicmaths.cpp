#include<iostream>

using namespace std;
void slow(int a ,int b)
{
    int ans=1;
    for(int i=0;i<b;i++)
    {
         ans=ans*a;
    }
    cout<<ans<<endl;
}

void fast(int a ,int b)
{
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=ans*a;
        }
        a=a*a;
        b>>1;
    }
    cout<<ans<<endl;
}

void bst(int arr[],int k,int i,int j)
{
    if(i>j)
    {
        return ;
    }
    int mid=(i+j)/2;
    if(arr[mid]==k)
    {
        cout<<"found"<<endl;
    }
    if(arr[mid]>k)
    {
        bst(arr,k,mid-1,j);
    }
    else{
        bst(arr,k,i,mid+1);
    }
}


int main()
{

    /*
//slow(5,4);
fast(5,4);
*/

/*
int v1[]={10,20,30,40,50,60};
int k=0;
int i=400;
int j=6;
bst(v1,i,k,j);*/

int a=0;
int b=1;
cout<<a<<" "<<b<<" ";
for(int i=3;i<10;i++)
{
    int count=a+b;
    a=b;
    b=count;
    cout<<count<<" ";

}

}