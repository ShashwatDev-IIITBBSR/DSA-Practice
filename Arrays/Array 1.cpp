#include <iostream.h>
using namespace std;
int main()
{
    int *p;
    int A[]={1,3,5,7,9};
    p=new int[5];
    p=&A[0];
    cout<<p[0]<<" "<<p[1]<<" "<<p[2];
}






