#include <iostream.h>
using namespace std; 
float exp(int x, int n)
{
    static int s=0;
    //here n is the number of terms in Taylor Series
    if (n==1)
    {
        return 1;
    }
    return (exp(x,n-1)*(x+n))/n; 
}
int main()
{
    int a,b;
    cout<<"Enter value of x ";
    cin>>a;
    cout<<"Enter number of terms ";
    cin>>b;
    cout<<"So the value of e^"<<a<<" at "<<b<<" terms is "<<exp(a,b);
}