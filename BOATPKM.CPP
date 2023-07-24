//_____/_____ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL _____\________//

//---------------- C++ PROGRAM TO MAKE MOVING BOAT ----------------------\\
/*________________________________________________________________________*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void main()
{

int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");    //Write the Path of BGI Folder

// USE LOOP TO MOVE BOAT
while(1)
{

int i=0;
while(i<450)
{
setcolor(10);
outtextxy(50,250,"PRESS e TO EXIT ");
setcolor(14);
outtextxy(50,265,"PRESS r TO MOVE RIGHT ");
setcolor(15);
outtextxy(50,280,"PRESS l TO MOVE LEFT ");
if(kbhit())
{
int key = getch();
if(key=='r')
{
i+=3;
}

if(key=='l')
{
i-=3;
}
if(key=='e')
{
exit (0);
}
}

//.. RIVER and BOAT

// _______ river
setfillstyle(9,9);
rectangle(-5,320,700,640);
floodfill(400,400,15);

//_________1th boat
setcolor(15);
setfillstyle(1,14);
line(50+i,390,120+i,390);
line(50+i,390,40+i,370);
line(120+i,390,130+i,370);
line(130+i,370,40+i,370);
floodfill(105+i,375,15);

//____1th boat man
circle(105+i,345,9);
line(105+i,354,105+i,370);
line(105+i,355,90+i,365);
delay(20);

//_____2nd boat
setfillstyle(1,6);
line(300+i,380,390+i,380);
line(310+i,400,380+i,400);
line(300+i,380,310+i,400);
line(390+i,380,380+i,400);
floodfill(311+i,382,15);

//____2nd boat flag
setfillstyle(9,10);
line(320+i,380,320+i,340);
line(320+i,340,350+i,370);
line(350+i,370,320+i,370);
floodfill(323+i,365,15);
delay(80);

cleardevice();
}
}
getch();
}

/*---------------- I HOPE YOU LIKE THIS PROGRAMMING ---------------------*/

/*____________ LIKE __________ SHARE _________ SUBSCRIBE _________________*/


