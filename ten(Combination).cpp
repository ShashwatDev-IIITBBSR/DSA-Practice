#include <iostream.h>
using namespace std; 
int combination(int n,int r)
{
    if(r!=0)
    {
        return (combination(n-1,r-1)*n)/r;
    }
    return 1;
}
int main()
{
    int a,b;
    cout<<"enter value of n and r in nCr ";
    cin>>a;
    cin>>b;
    cout<<combination(a,b);
}