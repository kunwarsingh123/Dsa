#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    cout<<"n:"<<n<<" ";
    cout<<endl;
    int ans =n* fact(n-1);
   
   cout<<"ans:"<<ans<<" ";
    return ans;
}


void countreverse(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
  
    countreverse(n-1);
    cout<<"n:"<<n<<endl;
}

int fibonacci(int n)
{
    if(n==0)
    {
        return 1;

    }
    if(n==1)
    {
        return 1;
    }

    return fibonacci(n-1)+fibonacci(n-2);

}

int main()
{
    int n;
    cout<<" enter number the :";
    cin>>n;
 /*  int ans= fact(n);
     cout<<"reverse:end:"<<endl;
   cout<<endl;
   cout<<ans<<endl;

   countreverse(n);*/
cout<<"fibonacci:"<<endl;


for(int i=0;i<n;i++)
{
    cout<<fibonacci(i)<<" ";
}

}