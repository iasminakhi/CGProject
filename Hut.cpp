#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;

     initgraph(&gd,&gm,"");
     initwindow(1000,800,"Hut");


         line(200, 100, 100, 300);
         line(200, 100, 300, 300);
         line(100, 300, 300, 300);
         setfillstyle(1,YELLOW);
         floodfill(150, 250, WHITE);

         rectangle(100,300,300,450);
         setfillstyle(1,GREEN);
         floodfill(200,350,WHITE);


        getch();
     closegraph();
}
