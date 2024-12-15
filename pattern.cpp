#include <iostream>
#include <math.h>
using namespace std;

void area(int n)
{
    cout<<(3.14)*pow(n,2)<<endl;
}

void factorial(int n)
{
    int ans=1;
    for(int i=n;i>0;i--)
    {
ans=ans*i;
    }
    cout<<"ans:"<<ans<<endl;
}


void prime(int n)
{
    int flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<" not prime:"<<endl;
            flag=1;

            break;

        }
        

    }
    if(flag==0)
    {cout<<"yes prime"<<endl;

    }

}

int main()
{/*
    int n;
    cout<<"n:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<i+1;j++)
        {
            if(j==0 || j==i)
            {
                cout<<j+1<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

cout<<endl<<endl;
for(int i=0;i<n;i++)
{
    for(int j=i+1; j<=n;j++)
    {
       if(j==i+1|| j==n || i==0 )
        {
            cout<<j<<" ";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}

for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {
        cout<<" ";
    }

    int j=0;
    for(;j<=i;j++)
    {
        cout<<j+1;
    }
    j--;
    for(;j>=1;j--)
    {
        cout<<j;
    }
    cout<<endl;

}

cout<<endl<<endl;

for(int i=0;i<n;i++)
{
    for(int j=0;j<i+1;j++)
    {
        cout<<"*";
    }
    cout<<endl;

    for(int j=n;j>0;j--)
    {
        cout<<"*";
    }
}
*/
int n;
cin>>n;
int count=0;

for(int i=0;i<n;i++)
{
    for(int j=i;j<2*i+1;j++)
    {
        if(j!=0 || j!=2*i)
        {
            cout<<"*";
        }
        else{
            cout<<j;
        }
    }
}
cout<<endl<<endl;

for(int i=0;i<n;i++)
{
    for(int j=0;j<2*i+1;j++)
    {
        if(j==0 || j== 2*i)
        {
            cout<<"*";
        }
        else{
            cout<<j;
        }
    }
    cout<<endl;
}

cout<<endl<<endl;
for(int i=1;i<=n;i++)
{
    int c=1;
    for(int j=1;j<=i;j++)
    {
        cout<<c<<" ";
        c=c*(i-j)/j;
    }
    cout<<endl;

}


int side=5;
area(n);


factorial(n);


prime(n);

}