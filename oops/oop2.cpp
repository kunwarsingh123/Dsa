#include<iostream>
using namespace std;


// encapsulation
class Animal {
    int age;
    int  weight;

    public:
  int getage()
  {
    return age;
  }
  int getwight()
  {
    return weight;
  }
void setage(int w,int a)
{
    this->weight=w;
    this->age=a;
}

};


// single inheriatance
class Animal1{
    protected :
    int age,weight;
    void eat()
    {
        cout<<"eat";
    }

    

};

class Dog:protected Animal1{
 public:
   void print(){
    cout<<this->age;
   }
  

};

//multilevel 
class fruit{
    public:
    string name;

};

class mango:public fruit{
    public:
    int weight;
};

class Alpha : public mango{
    public :
    int sugar;
};



// multiple inheritance and diamond problem
class janwar{
    public:
    int speed;
    int chemistry;
janwar()
{
    chemistry=778;
}

};
class B{
    public:
    string name;
    int chemistry;
B(){
    chemistry=88;
}

};

class c:public janwar,public B{
    public :
    void eat(){
        cout<<"JJKLJK";
    }
};

// Hierarchial 

class oow{
    public :
    int a;
};
class Bb:public oow
{
    public:
    int w;
};

class cc:public oow{

};



// compile time polymorphism

class Math{
    public:
   

int sum(int x)
{
   return x;
}
int sum(int x,int y)
{
    return x+y;
}

int sum(int x,int y,int z)
{
    return x+y+z;
}

int sum(int x,float y)
{
    return x+y;
}




};



//  operator overloading

class Param{
    public:
    int val;
void operator + (Param & obj2)
{
    int value1=this->val;
    int value2=obj2.val;
    cout<<(value2-value1)<<endl;
}

void operator -(Param & obj2)
{
    int value=this->val;
    int value1=obj2.val;
    cout<<value+value1<<endl;
}

void operator << (Param & obj2)
{
    int v1=this->val;
    int v2=obj2.val;
cout<<v1/v2<<endl;;

}


};



 int main()
 {

   /* // encapsulation
 Animal a;
 a.setage(55,44);
 cout<<a.getage()<<endl;





 // inheritance
//single level inheritance
Dog d;

d.print();
*/

// multilevel inheritance
/*
Alpha a;
a.name="ajay";
cout<<a.name<<endl;
a.weight=44;
cout<<a.weight<<endl;*/



//multiple inheritance
/*
c a;
a.name="Manish patidar";
cout<<a.name<<endl;
cout<<a.B::chemistry<<endl;
cout<<a.janwar::chemistry<<endl;
*/
// Hierarchial inheriatnce
/*
cc s;
s.a=45;
cout<<s.a<<endl;*/


// Hybrd inheritance


// polymorphism 

// compile overloaing
/*
Math m;
cout<<m.sum(55)<<endl;
cout<<m.sum(544,454,5654654)<<endl;
cout<<m.sum(44,4.3f)<<endl;

*/

// operator overloading

Param obj1;
Param obj2;


obj1.val=11;
obj2.val=100;

obj1+obj2;

obj1-obj2;


obj1 << obj1;

 }