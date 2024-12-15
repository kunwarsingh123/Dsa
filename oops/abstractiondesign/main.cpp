#include<iostream>
#include "bird.h"
using namespace std;
void birddoessomething(Bird*&bird)
{
    bird->eat();
    bird->fly();
    bird->eat();
      bird->eat();
    bird->fly();
    bird->eat();
      bird->eat();
    bird->fly();
    bird->eat();
}
int main()
{
    Bird *bird=new eagle();
    birddoessomething(bird);
// cannot be reassign in interface
//Bird *bird1=new Bird();


    return 0;
} 
