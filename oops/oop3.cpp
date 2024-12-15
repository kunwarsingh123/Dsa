#include<iostream>
#include<vector>
using namespace std;


class Animal{
    public:
 Animal()
{
    cout<<"inside Aimal constructor"<<endl;
}

  virtual void speak()
    {
        cout<<"speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
Dog()
{
    cout<<"Dog inside constructor"<<endl;
}

    void speak()
    {
        cout<<"barking"<<endl;
    }
};

// Abstraction






int main()
{  

// Run time polymorphism
/*
Animal a;
a.speak();
Dog d;
d.speak();*/
/*

Animal *a = new Animal;
a->speak();
Dog *d = new Dog;
d->speak();
*/


/*
//upcasting
Animal *a=new Dog();
a->speak();

// downcasting

Dog *d=(Dog *)new Animal();
d->speak();


*/

//Dog a;



// Dynamic memory allocation
int row=5;
int col=3;
int **arr=new int *[5];

for(int i=0;i<row;i++)
{
    arr[i]=new int [col];

}

//print
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;


}/*
// dealllocate

for(int i=0;i<row;i++)
{
delete[]arr[i];
}
delete []arr;



*/
/*
// doouble vector create 

vector<vector<int>>v(5,vector<int>(6,0));
for(int i=0;i<5;i++)
{
    for(int j=0;j<6;j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}

*/
}