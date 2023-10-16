#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void calc(int* temp,int* gen,int size)
{
for(int i=0;i<size;i++)
{
if(temp[i]==gen[i])
temp[i]=0;
else
temp[i]=1;
}
}
int main()
{
int *msg,
*key;
int msize,ksize,i;
cout<<"\n Enter the size of key:";
cin>>ksize;
key=new int[ksize];
cout<<"\n enter key:";
for(i=0;i<ksize;i++)
cin>>key[i];
cout<<"\n enter the size of message:";
cin>>msize;
msg=new int[msize+ksize-1];
cout<<"\n enter message:";
for(i=0;i<msize;i++)
cin>>msg[i];
for(i=msize;i<msize+ksize-1;i++)
msg[i]=0;
int *temp=new int[ksize];
int *zkey=new int[ksize];
for(i=0;i<ksize;i++)
{ temp[i]=msg[i]; zkey[i]=0; }
for(i=ksize-1;i<msize+ksize-1;i++)
{
temp[ksize-1]=msg[i];
if(temp[0]==0)
calc(temp,zkey,ksize);
else
calc(temp,key,ksize);
for(int j=1;j<ksize;j++)
{ temp[j-1]=temp[j]; }
}
cout<<"\n crc is:";
for(i=0;i<ksize-1;i++)
cout<<temp[i];
for(int i=msize,j=0;i<ksize
+msize-1,j<ksize-1;i++,j++)
{
msg[i]=temp[j];
}
int n=rand()%(ksize+msize+5);
msg[n]=!msg[n];
cout<<"\n"<<n<<"\n";
for(i=0;i<ksize;i++)
{
temp[i]=msg[i]; zkey[i]=0; }
for(i=ksize-1;i<msize+ksize-1;i++)
{
temp[ksize-1]=msg[i];
if(temp[0]==0)
calc(temp,zkey,ksize);
else
calc(temp,key,ksize);
for(int j=1;j<ksize;j++)
{ temp[j-1]=temp[j]; }
}
for(int i=0;i<ksize-1;i++)
{ cout<<temp[i];
}
int flag=1;
for(int i=0;i<ksize-1;i++)
{ if(temp[i]==1)
flag=0;
}
if(flag==0)
cout<<"\nError";
else
cout<<"\nNo error";
getch();
return 0;
}
