#include<iostream>
using namespace std;
class node
{
public:
    int power;
    int coeff;
    node *next;
};
class poly
{
    node *first;
    int n;
public:
    poly()
    {
        first=NULL;
    }
    void create()
    {
        char ch;
        first=new node;
        cout<<"Enter power and coeff for first node respectively:\n";
        cin>>first->power;
        cin>>first->coeff;
        first->next=NULL;
        do
        {
            cout<<"Want to enter more data press 'y':\n";
            cin>>ch;
            if(ch=='y')
            {
                insert();
            }
        }
        while(ch=='y');
    }
    void insert()
    {
        node *current,*temp,*prev;
        temp=new node;
        cout<<"Enter power and coeff respectively:\n";
        cin>>temp->power;
        cin>>temp->coeff;
        int b=temp->power;
        temp->next=NULL;
        prev=NULL;
        current=first;
        while((current!=NULL)&&((current->power)<b))
        {
            prev=current;
            current=current->next;
        }
        if(prev==NULL)
        {
            temp->next=first;
            first=temp;
        }
        else if(current==NULL)
        {
            prev->next=temp;
//temp->next=NULL;
        }
        else
        {
            temp->next=current;
            prev->next=temp;
        }
    }
    void add(poly p1,poly p2)
    {
//poly p3;
        node *curr,*curr1,*temp,*curr2;
        curr=p1.first;
        curr1=p2.first;
//curr2=p3.first;
        while((curr!=NULL)&&(curr1!=NULL))
        {
            if(curr->power==curr1->power)
            {
                temp=new node;
                temp->power=curr->power;
                temp->coeff=curr->coeff+curr1->coeff;
                temp->next=NULL;
                curr=curr->next;
                curr1=curr1->next;
            }
            else if(curr->power<curr1->power)
            {
                temp=new node;
                temp->power=curr->power;
                temp->coeff=curr->coeff;
                temp->next=NULL;
                curr=curr->next;
            }
            else if(curr1->power<curr->power)
            {
                temp=new node;
                temp->power=curr1->power;
                temp->coeff=curr1->coeff;
                temp->next=NULL;
                curr1=curr1->next;
            }
            if(first==NULL)
            {
                first=temp;
                curr2=first;
            }
            else
            {
                curr2->next=temp;
                curr2=temp;
            }
        }
        if(curr!=NULL)
        {
            while(curr!=NULL)
            {
                temp=new node;
                temp->power=curr->power;
                temp->coeff=curr->coeff;
                temp->next=NULL;
                curr=curr->next;
                curr2->next=temp;
                curr2=temp;
            }
        }
        else if(curr1!=NULL)
        {
            while(curr1!=NULL)
            {
                temp=new node;
                temp->power=curr1->power;
                temp->coeff=curr1->coeff;
                temp->next=NULL;
                curr1=curr1->next;
                curr2->next=temp;
                curr2=temp;
            }
        }
        if(curr2!=NULL)
            cout<<"Warning curr2 not null:\n";
    }
    void display()
    {
        node *current;
        current=this->first;
        while(current!=NULL)
        {
            cout<<current->power<<" -> "<<current->coeff<<"\n";
            current=current->next;
        }
        cout<<endl;
    }
};
int main()
{
    poly p1,p2,p3;
    cout << "Enter data of first polynomial" << endl;
    p1.create();
    cout << endl << "Enter data for second polynomial" << endl;
    p2.create();
    p1.display();
    p2.display();
    p3.add(p1,p2);
    cout<< endl << "Here Comes Resulting Polynomial: " << endl << endl;
    p3.display();
    cout << endl << endl;
}