#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;

     initgraph(&gd,&gm,"");
     initwindow(800,600,"Myname");

     line(200,100,150,200);
     line(200,100,250,200);
     line(175,150,225,150);
     line(300,100,300,200);
     line(300,150,350,100);
     line(300,150,350,200);
     line(400,100,400,200);
     line(500,100,500,200);
     line(400,150,500,150);
     line(600,100,600,200);
     line(550,100,650,100);
     line(550,200,650,200);


     getch();
     closegraph();
}
