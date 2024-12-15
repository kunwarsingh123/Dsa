#include<iostream>
using namespace std;
void mainj(int arr[])
{
    cout<<sizeof(arr);
    cout<<arr<<endl;
    cout<<&arr<<endl;
}


void util(int **a)
{
 
 **a=**a+1;
 
}

int main()
{
   /* int arr[10]={1,2,3,4,5};
   /* int *p=arr;
    for(int i=0;i<5;i++)
    cout<<i[arr]<<endl<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+3)<<endl;*/

   /* arr=arr+2;*/

 /*  int *p=arr;
   p=p+2;
   cout<<*arr;*/

   /*int *p = arr;
 /*  cout<<sizeof(p)<<endl;*/



   //char

/* char name[10]="sherbnao";
 char *p=name;
 cout<<*p<<endl;
 cout<<p<<endl;
cout<<p+2<<endl;
cout<<*(p+2)<<endl;*/

// char c='k';
// char *ch=&c;
// cout<<ch<<endl;
/*
char *c="lovebabbar";
cout<<c<<endl;*/
/*

int arr[10]={1,23,5,4};
cout<<sizeof(arr)<<endl;
cout<<arr<<endl;
cout<<&arr<<endl;
cout<<"call main function"<<endl;
mainj(arr);
*/

/*
int a=5;
int  * p= &a;
int **q=&p;
cout<<&a<<endl;
cout<<&p<<endl;
cout<<**q<<endl;
cout<<q<<endl;
cout<<*q<<endl;*/
/*
int a=5;
int *p=&a;
int **q=&p;
util(q);
cout<<a<<endl;*/

/*
//reference variable ajaj singh bhadouriya lakahan singh bhadouriya and vimla singh bhadouriya vaishnav cambridge higher secondry school pithampur 
int a=5;
int &b=a;
cout<<b<<endl;
b=b+5;
cout<<b<<endl;
cout<<a<<endl;
*/

//pointers practise questionsss 









}