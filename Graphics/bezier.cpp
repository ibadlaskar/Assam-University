#include<iostream>
#include<graphics.h>
using namespace std;
int main(){
	int x[4],y[4],i,px,py;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	cout<<"enter four control point";
	for(i=0;i<4;i++){
		cin>>x[i]>>y[i];
	}
	
	
	double t;
	for(t=0.0;t<1.0;t=t+0.001){
		px=(1-t)*(1-t)*(1-t)*x[0]+3*(1-t)*(1-t)*t*x[1]+3*(1-t)*t*t*x[2]+t*t*t*x[3];
		py=(1-t)*(1-t)*(1-t)*y[0]+3*(1-t)*(1-t)*t*y[1]+3*(1-t)*t*t*y[2]+t*t*t*y[3];
		delay(4);
		putpixel(px,py,WHITE);
	}
	getch();
	return 0;
}
