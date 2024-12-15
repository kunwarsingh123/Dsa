// inline function



/*

#include<iostream>
using namespace std;

inline void numbershow(int n)
{
    cout<<n<<endl;
}

int main()
{
   numbershow(77);
   numbershow(8909);
}



*/





// friend function
#include<iostream>
using namespace std;
class A{
    int x;
    public:
    int y;
    A(int v) : x(v){};
    
    int getX() const
    {
        return x;
    }
    void setx(int v)
    {
        x=v;
    }

    friend class B;
    friend void print( const A &);
};

class B {
    public:
    void print(const A &a)
    {
       // cout<<a.getX()<<endl;
       cout<<a.x<<endl;
    }
};


void print(const A&a)
{
    cout<<a.x<<endl;
}


int main()
{

A a(88);
B b;
b.print(a);
print(a);
}



/*

// can constructor can be made private

#include<iostream>
using namespace std;
class Box{
    int weight;
   
    Box(int w) {
        weight =w;
    };
     public:
    int getwidth()const
    {
        return weight;
    }
    void setweigth(int w)
    {
        weight=w;
    }
    friend class Boxfactory;
};


class Boxfactory{
    int count;
    public:
    Box getBox(int w)
    {++count;
    
        return Box(w);
    }
}
;


int main(){
  
Boxfactory j;
Box b=j.getBox(44);
cout<<b.getwidth()<<endl;

}*/