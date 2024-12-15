#include<iostream>

using namespace std;
#define Pi 3.14
#define Max(x,y)(x>y?x:y)
float circlearea(float r)
{
    return Pi*r;
}

void findmax(int x,int y)
{
    cout<<Max(x,y)<<endl;
}


int main()
{
   
   findmax(55,44);
   cout<<circlearea(5.2)<<endl;
}