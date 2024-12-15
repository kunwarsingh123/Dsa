#include <iostream>
using namespace std;

void printname(string s)
{
  for(int i=0;i<5;i++)
  {
    cout<<s<<endl;
  }
}

int add(int a,int b)
{
  cout<<"Al:"<<&a<<endl;
cout<<"Bl;"<<&b<<endl;
  return a+b;
}

void findmax(int a,int b,int c)
{
  if(a>b && a>c)
  {
    cout<<"A greater"<<endl;
  }
  else if(b>a && b>c)
  {
    cout<<"c grat"<<endl;
  }
  else{
    cout<<"C is grater"<<endl;
  }


}
void count(int c)
{
  int count=0;
  for(int i=0;i<c;i++)
  {
    count=count +i;
  }
  cout<<"Count:"<<count<<endl;
}
void sumcount(int c)
{ int sum=0;
  for(int i=0;i<c;i++)
  {
    if(i%2==0)
    {
      sum=sum+i;
    }
  }
  cout<<"sum:"<<sum<<endl;
}

int adddd(int a,int b,int c,int d);

int main() {

string str ="love bababar";
printname(str);

int a=90;
int b=99;
cout<<"A:"<<&a<<endl;
cout<<"B;"<<&b<<endl;
int c;
 c=add(a,b);
 cout<<c<<endl;
int d=adddd(a,b,c,55);
cout<<d<<endl;
findmax(a,b,c);
count(c);
sumcount(c);
  return 0;

}


int adddd(int a,int b,int c,int d){
  return a+b+c+d;
}
 