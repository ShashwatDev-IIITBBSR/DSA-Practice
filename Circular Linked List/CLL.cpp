#include <iostream>
using namespace std;
struct node 
{
    int data;
    struct node *next;
};
struct node *input()
{
    struct node *l,*k;
    int i,s;
    struct node *temp;
    cout<<"Enter elements(use '0' to stop)";
    l=new node;
    l->next=NULL;
    cin>>l->data;
    k=l;
    while(true)
    {
        temp=new node;
        cin>>s;
        if(s==0)
        {
            break;
        }
        temp->data=s;
        l->next=temp;
        temp->next=NULL;
        l=temp;
    }
    l->next=k;
    return k;
}
void display_circular_linked_list(struct node *n)
{
    struct node *k;
    cout<<n->data<<" ";
    k=n;
    n=n->next;
    while(k!=n)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main()
{
    struct  node *first;
    first=input();
    display_circular_linked_list(first);
    cout<<endl;
}
