#include <iostream.h>
using namespace std; 
int fib(int n)
{
    int h;
    if (n>3)
    {
        h=fib(n-1)+fib(n-2);
        return h;
    }
    else if (n==2||n==3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;
    cout<<"Enter the number";
    cin>>a;
    cout<<a<<"th number of fibonacci series is "<<" ";
    cout<<fib(a);
}

