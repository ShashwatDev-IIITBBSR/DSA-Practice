#include <iostream.h>
using namespace std; 
int A[100]={0};
int fib(int n)
{
    int h;
    if (n>3)
    {
        if (A[n-2]==0 || A[n-3]==0)
        {
            A[n-2]=fib(n-1);
            A[n-3]=fib(n-2);
            h=A[n-2]+A[n-3];
            return h;
        }
        if (A[n-1]==0)
        {
            A[n-1]=A[n-2]+A[n-3];
        }
        return A[n-1];
    }
    else if (n==2||n==3)
    {
        A[1]=A[2]=1;
        return 1;
    }
    else
    {
        A[0]=0;
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
