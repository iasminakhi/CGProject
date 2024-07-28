#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

     setcolor(RED);
     circle(300,210,90);
     setfillstyle(1,YELLOW);
     floodfill(330,215,RED);

     setcolor(WHITE);
     circle(265,180,17);
     setfillstyle(1,WHITE);
     floodfill(266,181,WHITE);

     setcolor(BLACK);
     circle(265,180,7);
     setfillstyle(1,BLACK);
     floodfill(266,181,BLACK);

     setcolor(WHITE);
     circle(335,180,17);
     setfillstyle(1,WHITE);
     floodfill(335,180,WHITE);

     setcolor(BLACK);
     circle(335,180,7);
     setfillstyle(1,BLACK);
     floodfill(336,181,BLACK);

     setcolor(BLUE);
     line(300,210,320,230);
     line(300,210,280,230);
     line(280,230,320,230);
     setfillstyle(1,BLUE);
     floodfill(300,215,BLUE);

     setcolor(RED);
     line(260,250,340,250);
     ellipse(300,250,180,360,40,30);
     setfillstyle(3,WHITE);
     floodfill(261,251,RED);

     getch();
     closegraph();
}
