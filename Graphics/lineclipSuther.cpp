#include<graphics.h>
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
int rcode_begin[4]={0,0,0,0},rcode_end[4]={0,0,0,0},region_code[4];
int W_xmax,W_ymax,W_xmin,W_ymin,flag=0;
float slope;
int x,y,x1,y1,i, xc,yc;
int gr=DETECT,gm;
initgraph(&gr,&gm,NULL);
cout<<("Enter XMin, YMin =");
cin>>W_xmin>>W_ymin;
cout<<"\n First enter XMax, YMax =";
cin>>W_xmax>>W_ymax;
cout<<"\n Please enter intial point x and y= "  ;
cin>>x>>y;
cout<<("\n Now, enter final point x1 and y1= ");
cin>>x1>>y1;
rectangle(W_xmin,W_ymin,W_xmax,W_ymax);
line(x,y,x1,y1);
line(0,0,600,0);
line(0,0,0,600);
if(y>W_ymax)  {
rcode_begin[0]=1;     
flag=1 ;
}
if(y<W_ymin) {
rcode_begin[1]=1;           
flag=1;
}
if(x>W_xmax)  {
rcode_begin[2]=1;           
flag=1;
}
if(x<W_xmin)   {
rcode_begin[3]=1;           
flag=1;
}
if(y1>W_ymax){
rcode_end[0]=1;           
flag=1;
}
if(y1<W_ymin) {
rcode_end[1]=1;           
flag=1;
}
if(x1>W_xmax){
rcode_end[2]=1;           // Right
flag=1;
}
if(x1<W_xmin){
rcode_end[3]=1;           //Left
flag=1;
 }
slope=(float)(y1-y)/(x1-x);
if(rcode_begin[2]==0 && rcode_begin[3]==1)   //left
{
y=y+(float) (W_xmin-x)*slope ;
x=W_xmin;
}
if(rcode_begin[2]==1 && rcode_begin[3]==0)       // right
{
y=y+(float) (W_xmax-x)*slope ;
x=W_xmax;
}
if(rcode_begin[0]==1 && rcode_begin[1]==0)      // top
{
x=x+(float) (W_ymax-y)/slope ;
y=W_ymax;
}
if(rcode_begin[0]==0 && rcode_begin[1]==1)     // bottom
{
x=x+(float) (W_ymin-y)/slope ;
y=W_ymin;
}
if(rcode_end[2]==0 && rcode_end[3]==1)   //left
{
y1=y1+(float) (W_xmin-x1)*slope ;
x1=W_xmin;
}
if(rcode_end[2]==1 && rcode_end[3]==0)       // right
{
y1=y1+(float) (W_xmax-x1)*slope ;
x1=W_xmax;
}
if(rcode_end[0]==1 && rcode_end[1]==0)      // top
{
x1=x1+(float) (W_ymax-y1)/slope ;
y1=W_ymax;
}
if(rcode_end[0]==0 && rcode_end[1]==1)     // bottom
{
x1=x1+(float) (W_ymin-y1)/slope ;
y1=W_ymin;

}
delay(1000);
clearviewport();
rectangle(W_xmin,W_ymin,W_xmax,W_ymax);
line(0,0,600,0);
line(0,0,0,600);
setcolor(RED);
line(x,y,x1,y1);
getch();
closegraph();
return 0;
}
