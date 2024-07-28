#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;

     initgraph(&gd,&gm,"");
     initwindow(800,500,"Car");

     for(int i = 0; i <= 1000; i = i+10)

     {

        setcolor(WHITE);
        line(0,150,800,150);

         //Mountain
         line(100,70,0,150);
         line(100,70,200,150);
         line(300,70,200,150);
         line(300,70,400,150);
         line(500,70,400,150);
         line(500,70,600,150);
         line(700,70,600,150);
         line(700,70,800,150);
         setfillstyle(1,LIGHTGRAY);
         floodfill(100,100,WHITE);
         setfillstyle(1,LIGHTGRAY);
         floodfill(300,120,WHITE);
         setfillstyle(1,LIGHTGRAY);
         floodfill(500,140,WHITE);
         setfillstyle(1,LIGHTGRAY);
         floodfill(700,100,WHITE);


         //Moon
        circle(200,50,40);
        setfillstyle(1,RED);
        floodfill(201,51,WHITE);

         //Car Body
         line(50+i,300,70+i,300);
         line(100+i,300,140+i,300);
         line(170+i,300,190+i,300);
         line(190+i,300,190+i,280);
         line(160+i,250,80+i,250);
         line(160+i,250,190+i,280);
         line(50+i,280,50+i,300);
         line(50+i,280,80+i,250);
         //setfillstyle(1,GREEN);
         //floodfill(55+i,180,WHITE);



        //Wheel
          circle(85+i,300,10);
          circle(155+i,300,10);
          setfillstyle(8,RED);
          floodfill(86+i,301,WHITE);
          setfillstyle(8,RED);
          floodfill(156+i,301,WHITE);

          //Window
          line(126+i,260,126+i,280);
          line(126+i,260,155+i,260);
          line(126+i,280,175+i,280);
          line(175+i,280,155+i,260);
          line(115+i,260,115+i,280);
          line(115+i,260,85+i,260);
          line(115+i,280,65+i,280);
          line(65+i,280,85+i,260);

          //Man
          circle(140+i,272,4);
          line(145+i,275,150+i,280);
          line(137+i,274,131+i,280);

          //Road
          setcolor(WHITE);
          line(0,312,800,312);


       delay(100);
       cleardevice();
}

     getch();
     closegraph();
}
