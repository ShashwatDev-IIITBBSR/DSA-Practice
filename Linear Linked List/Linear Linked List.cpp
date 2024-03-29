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
    l->next=NULL;
    return k;
}
void display_linked_list(struct node *n)
{
    while(true)
    {
        if(n==NULL)
        {
            break;
        }
        cout<<n->data<<" ";
        n=n->next;
    }
}
void recursive_display(struct node *n)
{
    if(n!=NULL)
    {
        cout<<n->data<<" ";
        recursive_display(n->next);
    }
}
void deletion_at_position(struct node *n,int position)
{
    struct node *k;
    int i=2;
    while(i<position)
    {
        n=n->next;
        i++;
    }
    k=n->next;
    n->next=k->next;
    k->next=0;
}
int main()
{
    struct  node *first;
    first=input();
    display_linked_list(first);
    cout<<endl;
    display_linked_list(first);
    cout<<endl;
    deletion_at_position(first,4);
    cout<<endl;
    display_linked_list(first);
}
