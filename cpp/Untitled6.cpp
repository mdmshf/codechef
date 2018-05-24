#include<stdio.h>

#include<conio.h>

#include<graphics.h>

int main()

{

int gd=DETECT,gm;

initgraph(&gd,&gm,"");

setcolor(RED);

outtextxy(180,240,"Press any key to see smiley face");

getch();

cleardevice();/*Remove previous content*/

setfillstyle(SOLID_FILL,YELLOW);

circle(320,240,100);/*make the main part of the smiley face*/

floodfill(320,240,RED);/*fill the circle with yellow color RED color here shows the border of circle*/

setcolor(BLACK);

ellipse(260,210,0,360,10,20);/*create right eye of smiley face*/

ellipse(370,210,0,360,10,20);/*create left eye of smiley face*/

arc(260,222,0,180,9);/*create lower part of right eye of smiley face*/

arc(370,222,0,180,9);/*create lower part of left eye of smiley face*/

setcolor(RED);

arc(310,250,190,2,45);/*create lips of smiley face*/

outtextxy(200,100,"I am happy");

outtextxy(200,380,"Press any key to make the face sad");

getch();

cleardevice();

circle(320,240,100);/*make the main part of the sad face*/

floodfill(320,240,RED);/*fill the circle with yellow color RED color here shows the border of circle*/

setcolor(BLACK);

ellipse(260,210,0,360,10,20);/*create right eye of sad face*/

ellipse(370,210,0,360,10,20);/*create left eye of sad face*/

arc(260,222,0,180,9);/*create lower part of left eye of sad face*/

arc(370,222,0,180,9);/*create lower part of right eye of sad face*/

setcolor(RED);

arc(310,250,2,190,45);/*create lips of sad face*/

outtextxy(200,100,"I am sad");

getch();

closegraph();

}

