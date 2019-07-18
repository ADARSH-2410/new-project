#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,maxx,midy,a;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
maxx=getmaxx();
midy=getmaxy()/2;
setbkcolor(YELLOW);                        //for check driver maxximum value
outtextxy(30,4,"CAR");					//printf("maxx%d",maxx);
					//printf("midy%d",midy);
for(a=0;a<maxx-30;a=a+3)
	{
	cleardevice();
      //	printf("welcome to you");
if(a<maxx-50)
	{
	setcolor(BLUE);
	settextstyle(5,0,5);
	outtextxy(10,0,"car moving");
	}
else if(a<maxx-32)
	{
	outtextxy(50,24,"press any key for exit");
	}
	setcolor(WHITE);
	line(0,midy-3,maxx,midy-3);
	setcolor(BLUE);
	rectangle(a-100,midy-80,a-20,midy-50);
	line(a-100,midy-50,a-150,midy-50);
	line(a-100,midy-80,a-130,midy-50);
	line(a-20,midy-50,a+30,midy-50);
	line(a-20,midy-80,a+10,midy-50);
	line(a-150,midy-50,a-150,midy-20);
	line(a+30,midy-50,a+30,midy-20);
	line(a+30,midy-20,a,midy-20); //niche
	line(a-150,midy-20,a-120,midy-20);
	setcolor(4);
	circle(a-100,midy-20,15);
	floodfill(a-100,midy-20,4);
	setcolor(BLUE);
	arc(a-100,midy-20,0,180,20);
	setcolor(4);
	circle(a-20,midy-20,15);
	floodfill(a-20,midy-20,4);
	setcolor(BLUE);
	arc(a-20,midy-20,0,180,20);
	line(a-80,midy-20,a-40,midy-20);
	pieslice(a-100,midy-20,0,30,15);
	pieslice(a-100,midy-20,30,60,15);
	pieslice(a-100,midy-20,60,90,15);
	pieslice(a-100,midy-20,90,120,15);
	pieslice(a-100,midy-20,120,150,15);
	pieslice(a-100,midy-20,150,180,15);
	pieslice(a-100,midy-20,180,210,15);
	pieslice(a-100,midy-20,210,240,15);
	pieslice(a-100,midy-20,240,270,15);
	pieslice(a-100,midy-20,270,300,15);
	pieslice(a-100,midy-20,300,330,15);
	pieslice(a-100,midy-20,330,360,15);
	pieslice(a-20,midy-20,0,30,15);
	pieslice(a-20,midy-20,30,60,15);
	pieslice(a-20,midy-20,60,90,15);
	pieslice(a-20,midy-20,90,120,15);
	pieslice(a-20,midy-20,120,150,15);
	pieslice(a-20,midy-20,150,180,15);
	pieslice(a-20,midy-20,180,210,15);
	pieslice(a-20,midy-20,210,240,15);
	pieslice(a-20,midy-20,240,270,15);
	pieslice(a-20,midy-20,270,300,15);
	pieslice(a-20,midy-20,300,330,15);
	pieslice(a-20,midy-20,330,360,15);
	delay(5);
	}
getch();
}
