#include<iostream>
using namespace std;



class abc{
   mutable int x;
    int *y;
     int z;
    public:
    abc()
    {
        x=0;
        y=new int(0);
    }
    abc(int _x,int _y,int _z=0)
    {
        x=_x;
        *y=_y;
        z=_z;
    }

int getx() const
{
 //   x=88;  //can't mpdify

    x=999;
    return x;
}
void setx(int x)
{
    this->x=x;
}

int gety() const
{
    return *y;
}
void sety(int val)
{
    *y=val;
}


};

void printAbc(const abc &a)
{
    cout<<a.getx()<<" "<<a.gety()<<endl;
}


int main()
{

    //const
 /*   const int x=5;
 cout<<x<<endl;
*/

/*
 const int *a=new int(99);
    // *a=44;
 cout<<*a<<endl;

 int b=5;
 a=&b;
 cout<<*a<<endl;

*//*

//2   //change with the help of pointer
 const int *a=new int(55);// const data ,non const pointer

// same as 23 line number 
// int const *a=new int(55); 

// *a=77; canot change the content of pointer..
 cout<<*a<<endl;

int b=5;
a=&b;// pointer itself can be reassigned...
cout<<*a<<endl;
*/
/*
// 3 const pointer and non const data
int *const aa=new int(55);
cout<<* aa<<endl;

*aa=22;
cout<<*aa<<endl;

// int b=33;
// a=&b; // nhi chalega kyuki pointer const h


// const pointer and const data

const int *const ab=new int(10);
cout<<*ab<<endl;



*/


// function make a const

abc w;
cout<<w.getx()<<endl;
cout<<w.gety()<<endl;

abc s(1,2);

printAbc(s);
return 0;

}