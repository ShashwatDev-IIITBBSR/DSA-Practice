#include <iostream.h>
using namespace std; 
int sum(int n)
{
    if(n>0)
    {
        return n + sum(n-1);
    }
    return 0;
}
int main()
{
    int a;
    cout<<"Enter number ";
    cin>>a;
    cout<<sum(a);
}