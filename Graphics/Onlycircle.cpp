#include<graphics.h>
int main(){
	int gd=DETECT,gm;
	
	initgraph(&gd,&gm,NULL);
	circle(100,100,70);
	getch();
	closegraph();
	return 0;
	
}
