#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

void decimal(int n)
{
    int decimal=0;
    int i=0;
    while(n)
    {
        int bit = n%10;
        decimal = decimal+bit *pow(2,i++);
        n=n/10;

    }
    cout<<"decimal:"<<decimal<<endl;
}


void bit(int n)
{/*
    int rem=0;
    int binary=0;
    int i=0;
    while(n>0)
    {
       rem=n%2;
     binary =rem*pow(10,i++)+binary;
       n=n/2;
    }
    cout<<binary<<endl;*/


int binary=0;
int i=0;
while(n>0)
{
    int bit=(n &1);
    binary=bit*pow(10,i++)+binary;
    n=n>>1;

}
cout<<binary<<endl;

decimal(binary);

}

void b(int n)
{
    int rem=0;
    int count=0;
    int i=0;
    while(n>0)
    {
        rem=n%2;
        count =rem*pow(10,i++)+count;
        n=n/2;
    }
    cout<<"count:;"<<count<<endl;
}

int main()
{
    int n;
    cin>>n;
    bit(n);
    b(n);
}