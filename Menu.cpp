#include<iostream>
#include<graphics.h>

using namespace std;

void Menu(){
     cleardevice();

     settextstyle(DEFAULT_FONT, HORIZ_DIR,2);

     setfillstyle(1,LIGHTGRAY);
     bar(50,70,600,500);

     outtextxy(100,100,"1. Myname.");
     outtextxy(100,150,"2. Flag.");
     outtextxy(100,200,"3. Hut.");
     outtextxy(100,250,"4. Mid Point Circle");
     outtextxy(100,300,"5. Emoji.");
     outtextxy(100,350,"6. Scenary.");
     outtextxy(100,400,"7. Moving Car.");
     outtextxy(100,450,"8. Exit.");

}

void myname()
{
     cleardevice();
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
     
}

void flag()
{
   cleardevice();

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
    
}

void hut()
{
     cleardevice();

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
     
}

void midpointcircle()
{
    cleardevice();

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

getch();
closegraph();

}
}
void emoji()
{
     cleardevice();

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
     
}

void scenary()
{
    cleardevice();

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
   
}

void moving_car()
{
     cleardevice();

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
    
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    int choice;

    Menu();

    while(1)
    {
        choice = getch();

        switch(choice)
        {
        case '1':
            outtextxy(200,400,"You chose option 1!");
            delay(1000);
            cleardevice();
            myname();
            delay(1000);
            cleardevice();
            break;
        case '2':
            outtextxy(200,400,"You chose option 2!");
            delay(1000);
            cleardevice();
            flag();
            delay(1000);
            cleardevice();
            break;
        case '3':
            outtextxy(200,400,"You chose option 3!");
            delay(1000);
            cleardevice();
            hut();
            delay(1000);
            cleardevice();
            break;
        case '4':
            outtextxy(200,400,"You chose option 4!");
            delay(1000);
            cleardevice();
            midpointcircle();
            delay(1000);
            cleardevice();
            break;
        case '5':
            outtextxy(200,400,"You chose option 4!");
            delay(1000);
            cleardevice();
            emoji();
            delay(1000);
            cleardevice();
            break;
        case '6':
            outtextxy(200,400,"You chose option 5!");
            delay(1000);
            cleardevice();
            scenary();
            delay(1000);
            cleardevice();
            break;
        case '7':
            outtextxy(200,400,"You chose option 5!");
            delay(1000);
            cleardevice();
            moving_car();
            delay(1000);
            cleardevice();
            break;
        case '8':
            closegraph();
            exit(0);
            break;
        default:
            outtextxy(200,400,"Invalid choice!");
            break;
        }
        delay(1000);
        Menu();
    }
}
