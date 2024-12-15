#include<iostream>
using namespace std;
/*
class abc{
    public:
    int x, y;
    void print() const // hidden parametr jaata h object
    {
        // this
        cout<<this-> x <<" "<<this->y<<endl;
    }
};


int main()
{
 abc a={55,55};
 abc b={551,120};
 a.print();
 b.print();
 return 0;
}

*/


/*
// static data member

#include<iostream>
using namespace std;

class abc{
    public:
  static   int x, y;
    void print() const
    {
        // this
        cout<< x <<" "<<y<<endl;
    }

   
};
 int abc::x;
int abc::y;

int main()
{
 abc a;
 a.x=22;
 a.y=899;

  a.print();
 abc b;
 b.x=90;
 b.y=99;
 a.print();
 b.print();
 return 0;
}
*/


// static member function

#include<iostream>
using namespace std;

class abc{
    public:
  static   int x, y;
 static   void print() 
    {
        // no this pointer accessible
        cout<< x <<" "<<y<<endl;
    }

   
};
 int abc::x;
    int abc::y;

int main()
{
 abc a;
 abc::x=22;
 abc::y=899;

  abc::print();
 abc b;
 b.x=90;
 b.y=99;
 a.print();
 b.print();
 return 0;
}