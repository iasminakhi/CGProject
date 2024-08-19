#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
initwindow(800,800,"Midpointcircle");
outtextxy(300,100,"Bipasha Iasmin");

int x,y,r;
cin>>x>>y>>r;

int x1 = 0;
int y1 = r;
int p0=1-r;
putpixel(x,y,7);
while(x1<y1)
{

x1++;
if(p0<0){

p0=p0+(2*x1)+1;
}
else{
y1--;
p0=p0+(2*x1)+1-(2*y1);
}
cout<<x1<<"..."<<y1<<endl;

putpixel(x+x1,y+y1,7);
putpixel(x+x1,y-y1,7);
putpixel(x-x1,y+y1,7);
putpixel(x-x1,y-y1,7);
putpixel(y+y1,x+x1,7);
putpixel(y+y1,x-x1,7);
putpixel(y-y1,x+x1,7);
putpixel(y-y1,x-x1,7);
delay(100);

}
getch();
closegraph();

}
