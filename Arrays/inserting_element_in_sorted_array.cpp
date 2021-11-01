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
void insert_element_in_sorted_array(struct array *arr,int value)
{
    int a,i;
    i=arr->length-1;
    a=arr->A[arr->length-1];
    while(a>arr->A[i])
    {
        arr->A[i]=arr->A[i+1];
        i--;
    }
    value;
    arr->length++;
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
    insert_element_in_sorted_array(q,8);
    cout<<endl;
    display(*q);
}