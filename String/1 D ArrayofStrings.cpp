#include <iostream.h>
using namespace std; 
int main()
{
    char A[10]={'A','B','C','D','e','f','g'};//character
    int a,i;
    a=10;
    for(i=0;i<a;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    char B[10]={'J','o','h','n','\0'};//string
    int j;
    for(j=0;B[j]!='\0';j++)
    {
        cout<<B[j]<<" ";
    }
    cout<<endl;
    char C[]="Joseph";//string
    for(j=0;C[j]!='\0';j++)
    {
        cout<<C[j]<<" ";
    }
    //lowercase to uppercase
    for(i=0;i<a;i++)
    {
        if(A[i]>97 && A[i]<122)
        {
            A[i]=A[i]-32;
        }
    }
    for(i=0;B[i]!='\0';i++)
    {
        if(B[i]>97 && B[i]<122)
        {
            B[i]=B[i]-32;
        }
    }
    cout<<endl;
    for(i=0;i<a;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(j=0;B[j]!='\0';j++)
    {
        cout<<B[j]<<" ";
    }
} 