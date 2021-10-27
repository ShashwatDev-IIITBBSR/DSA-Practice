#include <iostream.h>
using namespace std; 
struct array
{
    int A[100];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
void Array_input(struct array *arr,int l)
{
    int i;
    arr->length=l;
    for(i=0;i<arr->length;i++)
    {
        cin>>arr->A[i];
    }
}
void del_element(struct array *arr,int index)
{
    int i,j;
    for(i=index;i<arr->length-1;i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;
}
int main()
{
    array *q;
    cout<<"Enter size of array "<<endl;
    int a;
    cin>>a;
    Array_input(q,a);
    display(*q);
    cout<<endl;
    del_element(q,4);
    display(*q);
}