#include<iostream>
using namespace std;
int x=3333;

class abc{
    public:
    int x;
    int *y;
abc(int _x,int _y):x(_x),y(new int(_y)) {}
/*
// default copy constructor it does shallow copy
abc(const abc &obj)
{
    x=obj.x;
    y=obj.y;
}

*/

// deep copy constructor

abc(const abc &obj)
{
    x=obj.x;
    y=new int(*obj.y);
}


~abc()
{
    delete y;
}

void print() const {
    cout<<x<<" "<<&y<<" "<<*y<<endl;
}

};

int main()
{
    /*
abc a(55,44);
a.print();
abc b=a;
b.print();
cout<<"shallow copy constructor"<<endl;
*b.y=20;
//delete a;
b.print();
a.print();*/
 
/*

// deep copy
abc a(44,55);
a.print();
abc b(a);
b.print();
cout<<"deep copy constructor"<<endl;
*b.y=122;

b.print();
a.print();

*/


int x=90;
cout<<x<<endl;
cout<<::x<<endl;

}