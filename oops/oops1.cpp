#include<iostream>
using namespace std;

// class Animal{
//  int age;
//  char a;
//  char ch;
//  int b;
// };


class Animal{
private:
int weight;


    public:
//state
int age;
string name;


// constructor->default constructor
Animal()
{
    this->weight=0;
    this->age=0;
    this->name="";
    cout<<"hi Animal constructor"<<endl;
}

//parameterized contructor
Animal(int age)
{
    this->age=age;
    cout<<"parameteried constructor call:"<<endl;
}

Animal (int age,int weight,string name)
{
    this->name=name;
    this->age=age;
    this->weight=weight;
    cout<<"double parameterized constructor:"<<endl;
}


//copy constructor
Animal (Animal &a)
{
    this->age=a.age;
    this->weight=a.weight;
    this->name=a.name;
    cout<<"copy constructor calll"<<endl;

}

// destructor
~ Animal(){
    cout<<"Animal del contructor"<<endl;
}


// behaviour 
void eat(){
    cout<<"eat"<<endl;

}
void sleep(){
    cout<<"sleep"<<endl;

}

int getweight()
{
    return weight;
}
void setweight(int weight)
{
  this->weight=weight;
}

void print(){
    cout<<this->age<<" "<<this->name<<" "<<this->weight<<" "<<endl;
}


};


int main(){
/*

//static object cretion
//cout<<"size of animal:"<<sizeof(Animal)<<endl;
Animal ramesh;
ramesh.age=12;
ramesh.name="kunwar singh";
cout<<"age ramesh"<<ramesh.age<<endl;
cout<<"name:"<<ramesh.name<<endl;
ramesh.eat();
ramesh.sleep();

//private member ko access karne ke liye
ramesh.setweight(33);
cout<<ramesh.getweight()<<endl;


*/









// dynamic memory creation (object)
/*
Animal * suresh=new Animal;
(*suresh).age=12;
cout<<suresh->age<<endl;
(*suresh).name="ajay";
cout<<(*suresh).name<<endl;
suresh->eat();
suresh->setweight(55);
cout<<suresh->getweight()<<endl;
delete suresh;
Animal a;
Animal *aju=new Animal;
*/

/*
Animal a(100);
Animal *b=new Animal(100);

Animal bb(555,5565);*/

// copy constructor

 Animal b(100,50,"ajay");
 b.print();
 Animal c(b);
 c.print();

 Animal *bb =new Animal();
 cout<<"hi"<<endl;
 delete bb;

}