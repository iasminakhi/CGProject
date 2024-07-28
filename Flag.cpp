#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
     int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(GREEN);
    rectangle(150,100,320,200);
    setfillstyle(1, GREEN);
    floodfill(151,101,GREEN);


    setcolor(WHITE);
    rectangle(140,90,150,350);
    setfillstyle(1, WHITE);
    floodfill(141,91,WHITE);


    setcolor(RED);
    circle(230,150,30);
    setfillstyle(1, RED);
    floodfill(231,151,RED);


    getch();
    closegraph();
}
