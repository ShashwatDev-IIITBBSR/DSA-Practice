#include <iostream.h>
using namespace std; 
int main()
{
    char A[20],B[20];//character
    int j,a,i,z;
    cout<<"enter number of characters in string ";
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<a;i++)
    {
        cin>>B[i];
    }
    A[i]='\0';
    B[i]='\0';
    for(i=0;i<a;i++)
    {
        j=A[i];
        for(z=0;z!=a;z++)
        {
            if(j==B[z])
            {
                B[z]='0';
                break;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        if(B[i]!='0')
        {
            cout<<"Not ";
            break;
        }
    }
    cout<<"an Amalgram";
}
   