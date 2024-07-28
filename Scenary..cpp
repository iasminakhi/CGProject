
#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
     int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    initwindow(640,500,"Scenary");

    //House
    line(150,50,200,100);
    line(150,50,80,120);
    line(80,120,100,120);
    line(150,50,350,50);
    line(350,50,400,100);
    line(100,100,100,200);
    line(100,200,200,200);
    line(200,100,200,200);
    line(400,200,400,100);
    line(200,200,400,200);
    line(200,100,400,100);
    rectangle(130,130,170,170);
    rectangle(250,130,320,200);
    line(320,130,305,140);
    line(305,140,305,200);
    line(250,130,265,140);
    line(265,140,265,200);
    line(100,200,90,210);
    line(90,210,190,210);
    line(190,210,200,200);
    line(190,210,410,210);
    line(400,200,410,210);

    //House color
    setfillstyle(8,GREEN);
    floodfill(131,131,WHITE);
    setfillstyle(11,LIGHTGRAY);
    floodfill(101,101,WHITE);
    setfillstyle(1,BLUE);
    floodfill(163,55,WHITE);
    setfillstyle(1,BLUE);
    floodfill(82,119,WHITE);
    setfillstyle(3,GREEN);
    floodfill(251,121,WHITE);
    setfillstyle(1,BROWN);
    floodfill(150,205,WHITE);
    setfillstyle(1,BROWN);
    floodfill(250,205,WHITE);
    setfillstyle(5,LIGHTRED);
    floodfill(310,145,WHITE);
    setfillstyle(5,LIGHTRED);
    floodfill(260,145,WHITE);

    //Tree
    line(505,130,505,200);
    line(532,130,532,200);
    line(505,200,531,200);
    line(480,130,560,130);
    line(520,40,480,130);
    line(520,40,560,130);
    setfillstyle(1,BROWN);
    floodfill(506,131,WHITE);
    setfillstyle(1,GREEN);
    floodfill(521,51,WHITE);



//Road

    line(270,210,290,390);
    line(315,210,360,390);
    line(0,390,290,390);
    line(360,390,639,390);
    line(0,410,639,410);
    line(0,390,0,410);
    line(639,390,639,410);
    setfillstyle(1,BROWN);
    floodfill(1,391,WHITE);

    //River
    line(360,390,505,300);
    line(505,300,460,300);
    line(460,300,639,180);
    setfillstyle(1,LIGHTBLUE);
    floodfill(365,245,WHITE);

   //Boat
   line(490,380,595,380);
   line(490,380,460,360);
   line(595,380,625,360);
   line(460,360,625,360);
   line(543,360,543,350);
   line(490,350,595,350);
   line(543,310,490,350);
   line(543,310,595,350);
   setfillstyle(1,LIGHTBLUE);
   floodfill(565,290,WHITE);
   setfillstyle(1,RED);
   floodfill(544,320,WHITE);

    //Mountain
    line(100,180,0,180);
    line(400,180,505,180);
    line(532,180,639,180);
    line(100,150,50,110);
    line(50,110,0,150);
    line(400,150,450,110);
    line(450,110,505,150);
    line(532,150,590,110);
    line(590,110,639,150);
    setfillstyle(1,DARKGRAY);
    floodfill(50,150,WHITE);
    setfillstyle(1,DARKGRAY);
    floodfill(401,150,WHITE);
     setfillstyle(1,DARKGRAY);
    floodfill(535,150,WHITE);

    //Sky
    floodfill(0,0,WHITE);
    setfillstyle(1,LIGHTBLUE);
    floodfill(504,148,WHITE);
    setfillstyle(1,LIGHTBLUE);
    floodfill(532,148,WHITE);
    setfillstyle(1,LIGHTBLUE);
    floodfill(555,82,WHITE);

//SUN
    circle(70,50,40);
    setfillstyle(1,YELLOW);
    floodfill(71,51,WHITE);

    //Grass color
     setfillstyle(1,GREEN);
    floodfill(20,250,WHITE);
    setfillstyle(1,GREEN);
    floodfill(350,230,WHITE);


    getch();
    closegraph();
}
