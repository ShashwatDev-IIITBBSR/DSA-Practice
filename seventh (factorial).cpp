#include <iostream.h>
using namespace std; 
int fact(int n)
{
    if (n==1||n==0)
    {
        return 1;
    }
    return fact(n-1)*n;
}
int main()
{
    int a;
    cout<<"Enter number ";
    cin>>a;
    cout<<"factorial of "<<a<<" is "<<fact(a);
}