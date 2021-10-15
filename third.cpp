#include <iostream.h>
using namespace std;
int sum (int a[], int n)
{
    int i,j,s;
    s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    return s;
}
int main()
{
    int i,a;
    cout<<"enter number of digits in array";
    cin>>a;
    int b[100];
    for(i=0;i<a;i++)
    {
        cout<<"enter "<<i<<" th element ";
        cin>>b[i];
    }
    cout<<"sum is"<<sum(b,a);
}