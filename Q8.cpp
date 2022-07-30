#include<iostream>
using namespace std;
const int size=5;
int flag=0;
template<class t>
class CQ
{
      t queue[size];
      int front,rear;
      public:
             CQ()
             {
                 front=rear=-1;
             }
           
             void insert(t n)
             {
                  if((rear+1)%size!=front)
                  {
                                          rear=(rear+1)%size;
                                          queue[rear]=n;
                                          if(front<0)
                                          front=0;
                  }
                   else
                  {
                     cout<<"Queue overflow element not inserted:\n";
                     flag=-1;
                     //fflush(stdin);
                  }
             }
           
             t remove()
             {
                 t a;
                 if(empty()!=-1)
                 {
                              if((front==rear)&&(front>=0))
                              {
                                             a=queue[front];
                                             front=rear=-1;
                              }
                              else if(front!=size-1)
                              {
                                               a=queue[front++];
                              }
                              else
                              {
                                               front=0;
                                               a=queue[front];
                              }
                              return a;
                 }
                 else
                 {
                     cout<<"Queue underflow:\n";
                     return -1;
                 }
             }
           
             int empty()
             {
                 if(front==-1)
                 return -1;
                 else
                 return 0;
             }
           
             void display()
             {
                  if(empty()==-1)
                  {
                                                  cout<<"Empty queue:\n";
                  }
                  else
                  {
                      int r,f;
                      r=rear;
                      f=front;
                      while((f+1)%size!=(r+1)%size)
                      {
                                          cout<<queue[f]<<endl;
                                          f=(f+1)%size;
                      }
                      cout<<queue[f]<<endl;
                     
                      /*cout<<"the values in the original array:\n";
                      for(int i=0;i<size;i++)
                      {
                       cout<<queue[i]<<" ";
                      }
                      cout<<endl;*/
                  }
             }
           
};
int main()
{
    CQ<char> q1;
    char ch;
    char n;
    flag=0;
    do
    {
         cout<<"Enter 'y' if want to enter any element:\n";
         cin>>ch;
         if(ch=='y')
         {
                    cout<<"Enter the element:\n";
                    cin>>n;
                    q1.insert(n);
                    if(flag==-1)
                    break;
         }
       
    }while(ch=='y');
   
    cout<<"The resulting queue:\n";
    q1.display();
   
    flag=0;
    if(q1.empty()!=-1)
    {
    do
    {
         cout<<"Enter 'y' if want to remove any element:\n";
         cin>>ch;
         if(ch=='y')
         {
                    n=q1.remove();
                    if(n==-1)
                    break;
         }
    }while(ch=='y');
   
    cout<<"The resulting queue:\n";
    q1.display();
   
    do
    {
         cout<<"Enter 'y' if want to enter any element:\n";
         cin>>ch;
         if(ch=='y')
         {
                    cout<<"Enter the element:\n";
                    cin>>n;
                    q1.insert(n);
                    if(flag==-1)
                    break;
         }
    }while(ch=='y');
 
    cout<<"The resulting queue:\n";
    q1.display();
    }
   
    return 0;
}    
