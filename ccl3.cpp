#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void circle(double x1,double y1 ,double r){

	double x = 0, y = r;
	double p = 3 - (2*r);

	while(x < y){
		putpixel(x1+x, y1+y, BLUE);
		putpixel(x1-x, y1+y, BLUE);
		putpixel(x1+x, y1-y, BLUE);
		putpixel(x1-x, y1-y, BLUE);
		putpixel(x1+y, y1+x, BLUE);
		putpixel(x1+y, y1-x, BLUE);
		putpixel(x1-y, y1+x, BLUE);
		putpixel(x1-y, y1-x, BLUE);
		delay(50); 
		x = x + 1;

		if (p<0)
			p = p+4*(x)+6;
		else{
			p = p+4*(x-y)+10;
			y = y-1;
		}
	}
}

int main()
{
	int xc=200,yc=200,r=100;
	int d=(sqrt(3)/2)*r;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	circle(xc,yc,r);
	
	line(xc,yc-r,xc+d,yc+(r/2));
	line(xc+d,yc+(r/2),xc-d,yc+(r/2));
	line(xc-d,yc+(r/2),xc,yc-r);
	circle(xc,yc,(r/2));

	delay(5000);
	closegraph();
	
	return 0 ;

/*double x1,y1,r;
int gd = DETECT, gm;
initgraph(&gd,&gm,NULL);

cout<<"Enter x1";
cin>>x1;
cout<<"Enter y1";
cin>>y1;
cout<<"Enter r";
cin>>r;

circle(x1,y1,r);
delay(10000);
return 0;*/
}
