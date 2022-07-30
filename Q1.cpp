#include<iostream>
/*1. Write a program to search an element from a list. Give user the option to perform Linear or Binary
search. Use Template functions.*/

using namespace std;

template <class T>
void Lsearch(T *a, T item, int n)
{
 int z=0;
 for(int i=0;i<n;i++)
 {
  if(a[i]== item)
  {
   z=1;
   cout<<"\n Item found at position = "<<i+1<<"\n\n";
  }
  else
   if(z!=1)
  {
   z=0;
  }
 }

 if(z==0)
  cout<<"\n Item not found in the list\n\n";
}

template <class T>
void Bsearch(T *a, T item, int n)
{
 int beg=0,end=n-1;
 int mid=beg+end/2;

 while((a[mid]!=item) && (n>0))
 {
  if(item>a[mid])
   beg=mid;
  else
   end=mid;

  mid=(beg+end)/2;

  n--;
 }

 if(a[mid]==item)
  cout<<"\n Item found at position = "<<mid+1<<"\n\n";
 else
  cout<<"\n Item not found in the list\n\n";

}
  
 
int main()
{
 int iarr[10] = {2,42,50,70,9,8,3,1,6,10};
 double darr[6]= {42.2,5.1,9.6,3.2,6.1};
 int iele;
 double dele;

 cout<<"\n Elements of Integer Array \n";
 for(int i=0;i<10;i++)
 {
  cout<<" "<<iarr[i]<<" ,";
 }
 cout<<"\n\n Enter an item to be search: ";
 cin>>iele;

 cout<<"\n\n Linear Search Method\n";
 Lsearch(iarr,iele,10);
 cout<<"\n\n Binary Search method\n";
 Bsearch(iarr,iele,10);

 cout<<"\n Elements of double Array \n";
 for(int i=0;i<5;i++)
 {
  cout<<" "<<darr[i]<<" ,";
 }
 cout<<"\n\n Enter an item to be search: ";
 cin>>dele;

 cout<<"\n\n Linear Search Method\n";
 Lsearch(darr,dele,5);
 cout<<"\n\n Binary Search method\n";
 Bsearch(darr,dele,5);

 return 0;
}