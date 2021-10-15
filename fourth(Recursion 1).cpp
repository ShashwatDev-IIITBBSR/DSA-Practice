#include <iostream.h>
using namespace std;
int number(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        cout<<number(n-1)<<" ";
        return n;
    }
    return 0;
}
int main()
{
    int a;
    cout<<"Enter number";
    cin>>a;
    cout<<number(a);
}