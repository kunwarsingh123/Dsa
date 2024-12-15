#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
}

void printFibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";  // Print each Fibonacci number using recursion
    }
    cout << endl;
}


int ans(int n)
{
    int a;
    if(n<=0)
    return 1;
  

     a= n *(ans(n-1));
    cout<<a<<" ";
    return a;
}


int main()
{
   // ans(5);
   fibonacci(15);
} 
