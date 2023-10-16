#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
class sender
{
public :
int size,sf,sn,t,a[500],w,ff;
sender(){}//default constructor
sender(int x,int aa)//parameterised constructor
{
ff=aa; //ff and aa = total no of frames
size=pow(2,x)-1;//size of sliding window
sn=0;//next frame to sent
sf=0;//first outstanding frame
w=0;//count of frames
t=5;//timer (decremented by 1 after a frame in sent)
for(int i=0;i<aa;i=i+size+1)//to assign sequence no to frames
{
for(int j=0;j<=size;j++)
{
if(i+j < aa)
a[i+j]=j;
}
}
}
void reqstsend()//to send frames
{
if(w<ff)//check whether the no. of frame sent is less than total no of frames
{
if(t<=0 )//check for time out
{
cout<<endl<<"timer out"<<endl;
timeout();
}
else if((sn-sf)>=size || sf==sn+1 )
{
cout<<endl<<"window is full"<<endl;
t--;
}
else if(sn == size)//special case when sn==size sn should be =0
{
cout<<endl<<"frame F"<<sn<<" sent..."<<endl;
sn=0;
t--;
w++;
}
else//normal sending
{
cout<<endl<<"frame F"<<sn<<" sent..."<<endl;
sn++;
t--;
w++;
}
}
else
cout<<endl<<" ***all frames sent***"<<endl;
}
void arivack(int y)//recieving acknowledgement
{
sf=y;
t=5;
}
void timeout()
{
sn=sf;
t=5;
w=w-5;
}
void sdisplay()//displaying frames initially
{
cout<<endl<<"frames :- ";
for(int i=0;i<ff;i++)
cout<<" "<<a[i]<<" ";
cout<<endl<<endl<<"sn = "<<sn<<endl<<"sf = "<<sf<<endl;
}
};//class sender ends
class reciever
{
public :
int rn,b[500],c;
sender *s;
reciever(sender *y,int q)
{
rn=0;//next expected frame
c=0;//coounter
for(int i=0;i<q;i++)
b[i]=0;
s=y;
}
void arivnot(int x)
{
if(rn == x)//recieve in order
{
if(rn != s->size)//recieving frames
{
b[c]=rn;
c++;
rn++;
}
else//special case when rn =size, then rn should be =0
{
b[c]=rn;
c++;
rn=0;
}
}
}
void sendack(int z)
{
cout<<endl<<"acknowledgement A"<<z<<" sent"<<endl;
s->arivack(z);
}
void rdisplay()
{
cout<<endl<<"frames recieved :- ";
for(int i=0;i<c;i++)
cout<<" "<<b[i]<<" ";
cout<<endl<<"rn = "<<rn<<endl;
}
};//class reciever end
int main()
{
int m,x=3,h,y;
cout<<endl<<"enter the value of m i.e no of bits allowed for sequence no. :--> ";
cin>>m;
cout<<"size of sliding window ="<<pow(2,m)-1<<endl;
cout<<"enter the total no of frames you want to send "<<endl;
cin>> h;
sender pqr(m,h),*g=&pqr;
reciever rec(g,h),*r=&rec;
while(x != 0)
{
int counter =0;
if(counter==0)
{
cout<<endl<<"1 --> go to sender"<<endl
<<"0 --> exit"<<endl
<<"enter code :--> ";
cin>>x;
counter++;
}
else
{
cout<<endl<<"1 --> go to sender"<<endl
<<"2 --> go to reciever"<<endl
<<"0 --> exit"<<endl
<<"enter code :--> ";
cin>>x;
}
switch(x)
{
case 1 : while(y != 3)
{
pqr.sdisplay();
cout<<endl<<"1 --> send frame"<<endl
<<"2 --> send frame (lost or incorrect)"<<endl
<<"3 --> go back"<<endl
<<" :--> ";
cin>>y;
switch(y)
{
case 1 : pqr.reqstsend();
if(pqr.sn == 0)
r->arivnot(pqr.size);
else
r->arivnot(pqr.sn-1);
break;
case 2 : pqr.reqstsend();
break;
case 3 : break;
default : cout<<endl<<"!!! error in code !!!"<<endl;
break;
}
}
y=0;
break;
case 2 : while(y != 2)
{
r->rdisplay();
cout<<endl<<"1 --> send acknowledgement"<<endl
<<"2 --> go back"<<endl
<<" :--> ";
cin>>y;
switch(y)
{
case 1 : r->sendack(rec.rn);
break;
case 2 : break;
default : cout<<endl<<"!!! error in code !!!"<<endl;
break;
}
};
y=0;
break;
case 0 : break;
default : cout<<endl<<"!!! error in code !!!"<<endl;
break;
}
}
getch();
}
