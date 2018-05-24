#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
#include<fstream.h>
#define TRUE 1
#define FALSE 0
int main();
class reagent
{
public:
int rno[3];
void setr(int,int,int);
reagent();
};
void reagent::setr(int rno1=0,int rno2=0,int rno3=0)
{
rno[0]=rno1;
rno[1]=rno2;
rno[2]=rno3;
}
void reagent::reagent()
{
for(int i=0;i<3;i++)
rno[i]=0;
}
class observation
{ public:
char obs[50];
observation();
void setobs(char ob[]);
};
observation::observation()
{
strcpy(obs," ");
}
void observation::setobs(char ob[])
{
strcpy(obs,ob);
}
class ion
{
public:
int ionno;
char name[10];
int charge;
reagent rgroup;
observation ogroup ;
reagent confirm[3];
observation oconfirm[3];
void displaydata();
};
int sizec,sizea;
ion cation[15];
ion anion[15];
void salt()
{
ifstream fo("cation");
ifstream fa("anion");
for(int i=0;i<15;i++)
{
fo.read((char*)&cation[i],sizeof(cation[i]));
sizec=i;
if(fo.eof())
break;
}
for(i=0;i<15;i++)
{
fa.read((char*)&anion[i],sizeof(anion[i]));
sizea=i+1;
if(fa.eof())
break;
}
}
int rsaltnc,rsaltna;
ion scation,sanion;
reagent rcurrent;
observation ocurrent;
void gencat()
{salt();
rsaltnc=random(sizec);
rsaltna=random(sizea)+1;
for(int i=0;i<sizec;i++)
{
if(cation[i].ionno==rsaltnc)
scation=cation[i];
}
for(i=0;i<sizea;i++)
{
if(anion[i].ionno==rsaltna)
sanion=anion[i];
}
}
void def()
{
strcpy(ocurrent.obs,"NO REACTION");
randomize();
if(rcurrent.rno[0]==scation.rgroup.rno[0]&&rcurrent.rno[1]==scation.rgroup.rno[1]&&rcurrent.rno[1]==scation.rgroup.rno[1])
{
ocurrent=scation.ogroup;
}
for(int i=0;i<3;i++)
if(rcurrent.rno[0]==scation.confirm[i].rno[0]&&rcurrent.rno[1]==scation.confirm[i].rno[1]&&rcurrent.rno[1]==scation.confirm[i].rno[1])
{
ocurrent=scation.oconfirm[i];
}
if(rcurrent.rno[0]==sanion.rgroup.rno[0]&&rcurrent.rno[1]==sanion.rgroup.rno[1]&&rcurrent.rno[1]==sanion.rgroup.rno[1])
{
ocurrent=sanion.ogroup;
}
for(i=0;i<3;i++)
if(rcurrent.rno[0]==sanion.confirm[i].rno[0]&&rcurrent.rno[1]==sanion.confirm[i].rno[1]&&rcurrent.rno[1]==sanion.confirm[i].rno[1])
{
ocurrent=sanion.oconfirm[i];
}
}
union REGS i,o;
int added[3]={0,0,0};
int k=0;
typedef unsigned int bool;
int x=0,y=0,c=0;
void display();
void mouse()
{
http://i.x.ax=1;
int86(51,&i,&o);
http://i.x.ax=3;
int86(51,&i,&o);
c=o.x.bx;
x=http://o.x.cx;
y=o.x.dx;
}
class button
{
int x1,x2,y1,y2;
char caption[20];
public:
bool isclicked()
{
if(x>x1&&x<x2&&y>y1&&y<y2&&c==1)
return TRUE;
else
return FALSE;
}
button()
{
;
}
void init(int xa,int xb,int ya,int yb,char str[])
{
x1=xa;
x2=xb;
y1=ya;
y2=yb;
strcpy(caption,str);
setfillstyle(1,LIGHTGRAY);
bar(x1,y1,x2,y2);
setfillstyle(1,WHITE);
bar(x1,y1,x2,y1+2);
bar(x1,y1,x1+2,y2);
setfillstyle(1,DARKGRAY);
bar(x1,y2,x2,y2-2);
bar(x2,y2,x2-2,y1);
setcolor(BLACK);
outtextxy(x1+5,y1+5,caption);
}
button(int xa,int xb,int ya,int yb,char str[])
{
x1=xa;
x2=xb;
y1=ya;
y2=yb;
strcpy(caption,str);
setfillstyle(1,LIGHTGRAY);
bar(x1,y1,x2,y2);
setfillstyle(1,WHITE);
bar(x1,y1,x2,y1+2);
bar(x1,y1,x1+2,y2);
setfillstyle(1,DARKGRAY);
bar(x1,y2,x2,y2-2);
bar(x2,y2,x2-2,y1);
setcolor(BLACK);
outtextxy(x1+5,y1+5,caption);
}
void work(void (*func)(void))
{
mouse();
if(isclicked())
{
setfillstyle(1,LIGHTGRAY);
bar(x1,y1,x2,y2);
setfillstyle(1,DARKGRAY);
bar(x1,y1,x2,y1+2);
bar(x1,y1,x1+2,y2);
setfillstyle(1,WHITE);
bar(x1,y2,x2,y2-2);
bar(x2,y2,x2-2,y1);
setcolor(BLACK);
outtextxy(x1+5,y1+5,caption);
delay(100);
setfillstyle(1,LIGHTGRAY);
bar(x1,y1,x2,y2);
setfillstyle(1,WHITE);
bar(x1,y1,x2,y1+2);
bar(x1,y1,x1+2,y2);
setfillstyle(1,DARKGRAY);
bar(x1,y2,x2,y2-2);
bar(x2,y2,x2-2,y1);
setcolor(BLACK);
outtextxy(x1+5,y1+5,caption);
func();
}
}
bool work()
{ bool b=FALSE;
mouse();
if(isclicked())
{
b=TRUE;
setfillstyle(1,LIGHTGRAY);
bar(x1,y1,x2,y2);
setfillstyle(1,DARKGRAY);
bar(x1,y1,x2,y1+2);
bar(x1,y1,x1+2,y2);
setfillstyle(1,WHITE);
bar(x1,y2,x2,y2-2);
bar(x2,y2,x2-2,y1);
setcolor(BLACK);
outtextxy(x1+5,y1+5,caption);
delay(100);
setfillstyle(1,LIGHTGRAY);
bar(x1,y1,x2,y2);
setfillstyle(1,WHITE);
bar(x1,y1,x2,y1+2);
bar(x1,y1,x1+2,y2);
setfillstyle(1,DARKGRAY);
bar(x1,y2,x2,y2-2);
bar(x2,y2,x2-2,y1);
setcolor(BLACK);
outtextxy(x1+5,y1+5,caption);
}
return b;
}
void restore()
{
setfillstyle(1,LIGHTGRAY);
bar(x1,y1,x2,y2);
setfillstyle(1,WHITE);
bar(x1,y1,x2,y1+2);
bar(x1,y1,x1+2,y2);
setfillstyle(1,DARKGRAY);
bar(x1,y2,x2,y2-2);
bar(x2,y2,x2-2,y1);
setcolor(BLACK);
outtextxy(x1+5,y1+5,caption);
}
int rety()
{
return y2;
}
};
button chemical[29];
char chemname[][25]={"H2O","dil.H2SO4","LIME WATER","BaCl2","SODIUM NITROPRUSSIDE","CH3COOH","FeSO4","conc.H2SO4","NaOH","NH4OH","NH4Cl","HNO3","AgNO3","CS2","Cl Water","MnO2","K2Cr2O7","Oxalic Acid","CH3CH2OH","KmNO4","CaCl2","Cu Chips","KI","K2[Fe(CN)6]","Blue Litmus","KNO3","Dimetyl Glyoxime","H2S","(NH4)2SO2"};
int scrpos=10;
void scrbar()
{setfillstyle(1,LIGHTGRAY);
bar(1,51,16,getmaxy()*2/3-27);
}
button react;
void reactf();
int cstatus=0;
void add_rf()
{
while(cstatus<=2)
{
for(int i=0;i<29;i++)
{
if(chemical[i].work()==TRUE)
{
rcurrent.rno[cstatus]=i+1;
cstatus++;
}
}
react.work(reactf);
}
}
void help()
{setcolor(WHITE);
char content[][35]={
"This is an Salt analysis",
"stimulator.in this program",
"a user has to find the",
"randomly generated salt",
"using different reagents.",
"User should click on add" ,
"reagent button then select ",
"the reagent(s) and then",
"clickreact.An Observation",
" would be displayed at ",
"the bottom of the",
"screen.Repeat this process ",
"to know the salt.You",
" can Know the correct",
"anwser ,in case you cannot",
",find it by clicking on",
" show salt button",
"Get a new salt through",
"Refresh button",
"You can also add a new ",
"ion to the program through ",
"add new ion button.",
".........................",
"Thank You for Using this."
};
for(int i=0;i<24;i++)
outtextxy(5+getmaxx()*2/3,40+i*10,content[i]);
}
void display()
{
setbkcolor(BLUE);
setfillstyle(1,LIGHTGRAY);
bar(getmaxx()/3+1,26,getmaxx()*2/3-1,getmaxy()/3-1);
setfillstyle(11,LIGHTBLUE);
bar(1,26,getmaxx()/3-1,getmaxy()*2/3-1);
bar(getmaxx()*2/3+1,26,getmaxx()-1,getmaxy()*2/3-1);
setfillstyle(1,GREEN);
bar(0,0,getmaxx(),25);
line(0,25,getmaxx(),25);
rectangle(0,0,getmaxx(),getmaxy());
line(getmaxx()/3,0,getmaxx()/3,getmaxy()*2/3);
line(getmaxx()*2/3,0,getmaxx()*2/3,getmaxy()*2/3);
line(getmaxx()/3,getmaxy()/3,getmaxx()*2/3,getmaxy()/3);
line(0,getmaxy()*2/3,getmaxx(),getmaxy()*2/3);
setcolor(RED);
outtextxy(40,10,"LIST OF REAGENTS");
outtextxy(40,15,"________________");
outtextxy(getmaxx()/3+40,10,"ACTIONS LIST");
outtextxy(getmaxx()/3+40,15,"____________");
outtextxy(getmaxx()*2/3+40,10," HELP");
outtextxy(getmaxx()*2/3+40,15," ____");
outtextxy(getmaxx()/3+40,getmaxy()/3+10,"SHOW ANSWER");
outtextxy(getmaxx()/3+40,getmaxy()/3+15,"____________");
outtextxy(getmaxx()/3+40,getmaxy()*2/3+10,"OBSERVATION");
outtextxy(getmaxx()/3+40,getmaxy()*2/3+15,"___________");
help();
}
int ax1=0,ax2=0,ax3=0;
void testf()
{
setfillstyle(1,1);
bar(250,220,400,250);
setcolor(GREEN);
outtextxy(250,220,"The Salt Is:");
char *sname=strcat(strcat(sanion.name," "),scation.name);
outtextxy(250,230,sname);
}
void reactf()
{
setfillstyle(0,BLUE);
bar(1,getmaxy()*2/3+25,getmaxx()-1,getmaxy()-1);
def();
setcolor(WHITE);
outtextxy(220,350,ocurrent.obs);
cstatus=3;
rcurrent.rno[0]=rcurrent.rno[1]=rcurrent.rno[2]=0;
}
void addnf()
{
ofstream t("anion");
ofstream s("cation");
ion n;
int tmp;
char abc[50];
cleardevice();
cout<<"enter ionno";
cin>>n.ionno;
cout<<"enter name";
gets(http://n.name);
cout<<"enter charge";
cin>>n.charge;
cout<<"enter group reagent no";
cin>>tmp;
n.rgroup.setr(tmp);
cout<<"enter group reagent observation";
gets(abc);
n.ogroup.setobs(abc);
cout<<"enter confirmatory reagent no 1";
cin>>tmp;
n.confirm[0].setr(tmp);
cout<<"enter confirmatory reagent observation no 1";
gets(abc);
n.oconfirm[0].setobs(abc);
cout<<"enter confirmatory reagent no 2";
cin>>tmp;
n.confirm[1].setr(tmp);
cout<<"enter confirmatory reagent observation no 2";
gets(abc);
n.oconfirm[1].setobs(abc);
cout<<"enter confirmatory reagent no 3";
cin>>tmp;
n.confirm[2].setr(tmp);
cout<<"enter confirmatory reagent observation no 3";
gets(abc);
n.oconfirm[2].setobs(abc);
if(n.charge>=0)
t.write((char*)&n,sizeof(n));
else
s.write((char*)&n,sizeof(n));
getch();
main();
}
button add_r,test,addn,scrup,scrdw,refresh,closeit;
void setscrpos()
{
setfillstyle(11,LIGHTBLUE);
bar(20,26,getmaxx()/3-1,getmaxy()*2/3-1);
setfillstyle(1,BLUE);
bar(1,getmaxy()*2/3+1,getmaxx()/3-1,getmaxy()-1);
delay(10);
for(int i=0;i<29;i++)
{
chemical[i].init(25,200,55+i*30-(scrpos*3-10),84+i*30-(scrpos*3-10),chemname[i]);
}
setfillstyle(1,GREEN);
bar(1,1,getmaxx()/3-1,24);
setcolor(RED);
outtextxy(40,10,"LIST OF REAGENTS");
outtextxy(40,15,"________________");
setfillstyle(1,BLUE);
bar(1,getmaxy()*2/3+1,getmaxx()/3-1,getmaxy()-1);
}
void rf()
{
gencat();setfillstyle(1,1);bar(250,220,400,250);bar(1,getmaxy()*2/3+25,getmaxx()-1,getmaxy()-1);
}
void yesf()
{
exit(0);
}
void nof()
{
main();
}
void closeitf()
{
//bar(200,100,430,200);
setfillstyle(1,LIGHTGRAY);
bar(200,100,430,200);
setfillstyle(1,WHITE);
bar(200,100,430,102);
bar(200,100,202,200);
setfillstyle(1,DARKGRAY);
bar(200,200,430,200-2);
bar(430,200,430-2,100);
setcolor(RED);
outtextxy(232,110,"SURE TO EXIT(YES/NO)");
button yes(250,300,150,170,"YES");
button no(330,380,150,170,"NO");
while(1)
{
yes.work(yesf);
no.work(nof);
}
getch();
exit(0);
}
void scrupf()
{scrbar();
setscrpos();
if(scrpos>=12)
scrpos-=2;
setfillstyle(1,RED);
bar(1,scrpos+42,16,scrpos+62);
}
void scrdwf()
{scrbar();
setscrpos();
if(scrpos+62<=getmaxy()*2/3-27)
scrpos+=2;
setfillstyle(1,RED);
bar(1,scrpos+42,16,scrpos+62);
}
void main()
{
strcpy(ocurrent.obs,"NO REACTION");
randomize();
clrscr();
gencat();
int d=DETECT,g;
initgraph(&d,&g,"");
http://i.x.ax=4;
http://i.x.cx=0;
i.x.dx=0;
int86(51,&i,&o);
display();
for(int i=0;i<29;i++)
{
chemical[i].init(25,200,55+i*30+scrpos-10,84+i*30+scrpos-10,chemname[i]);
}
add_r.init(getmaxx()/3+10,getmaxx()/3+110,40,60,"ADD REAGENT");
react.init(getmaxx()/3+10,getmaxx()/3+110,70,90,"REACT");
test.init(getmaxx()/3+10,getmaxx()/3+110,100,120,"SHOW SALT");
addn.init(getmaxx()/3+10,getmaxx()/3+110,130,150,"ADD NEW ION");
refresh.init(getmaxx()/3+120,getmaxx()/3+210,40,60,"REFRESH");
closeit.init(getmaxx()-20,getmaxx(),0,25,"X");
scrup.init(1,16,25,50,"^");
scrdw.init(1,16,getmaxy()*2/3-26,getmaxy()*2/3-1,"v");
for(i=0;i<2;i++)
scrdwf();
//cout<<cation[3].confirm[0].rno[0];
char ex='a';
while(ex!=27)
{
scrup.work(scrupf);
scrdw.work(scrdwf);
test.work(testf);
add_r.work(add_rf);
react.work(reactf);
addn.work(addnf);
refresh.work(rf);
closeit.work(closeitf);
if(cstatus>=2)
{
cstatus=0;
}
if(kbhit())
ex=getch();
}
}
