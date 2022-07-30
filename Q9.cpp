//Create and perform different operations on Double-ended
//Queue using Linked List implementation.
#include <iostream>
using namespace std;

template<class t> class node
{
public:
    t data;
    node *next;
};
template<class t> class queues
{
    node<t> *front,*rear,*tmp;
public:
    queues()
    {
        front=rear=tmp=NULL;
    }                           void enqueue(t n)
    {
        if(front==NULL)
        {
            front=new node<t>;
            front->data=n;
            front->next=NULL;
            rear=front;
        }
        else
        {
            tmp=new node<t>;
            tmp->data=n;
            tmp->next=NULL;
            rear->next=tmp;
            rear=rear->next;
        }
    }
    t dequeue()
    {
        t a;
        node<t> *tmp;
        if(front==NULL)
            cout<<"Sorry!!!! can't be dequeued as queue is empty:\n";
        else
        {
            tmp=front;
            a=front->data;
            front=front->next;
            delete(tmp);
            return a;
        }
    }                           void display()
    {
        node<t> *tmp=NULL;
        if(front==NULL)                cout<<"Empty queue:\n";
        else                tmp=front;
        while(tmp!=NULL)
        {
            cout<<tmp->data<<endl;
            tmp=tmp->next;
        }
    }                           int empty()
    {
        if(front==NULL)                   return -1;
        else                   return 1;
    }
};
int main()
{
    char ch;
    int n;
    queues<int> s1;
    do
    {
        cout<<"Enter y if u want to insert any element:\n";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"Enter the element to be pushed:\n";
            cin>>n;
            s1.enqueue(n);
        }
    }
    while(ch=='y');
    do
    {
        cout<<"Enter y if u want to delete any element:\n";
        cin>>ch;
        if(ch=='y')
        {
            n=s1.dequeue();
            if(n==0)
                break;
            cout<<"deleted element is : "<<n<<"\n";
        }
    }
    while(ch=='y');
    if((s1.empty()==1))
    {
        cout<<"The queue after all operations:\n";
        s1.display();
    }
    return 0;
}