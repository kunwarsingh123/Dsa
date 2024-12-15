#include<iostream>
#include <math.h>
using namespace std;



void print(int n,int k )
{
    int sum=0;
    int rem=1;
    int i=0;
    while(n>0)
    {
        rem=n%2;
        sum=sum+pow(10,i++)*rem;
        n=n/2;

    }
    cout<<sum<<endl;


}



int main()
{
    int n=10;
    int k=2;
    int mask=1<<k;
    int ans =n|mask;
    cout<<ans<<endl;
    print(n,k);
   

}
