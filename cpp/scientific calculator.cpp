
   #include<iostream>
   #include<stdio.h>
   #include<conio.h>
   #include<math.h>
   #include<stdlib.h>
using namespace std;
   class mun
    {
      public:

      int a,b,c,d,e,f,g,h,i,j,k,o,p,q,r,s,u;
      int l,m,n;
      float t,v,y,co,ta,sq,lo,ge,po,ans;
    mun(){ans=0;}
    void add();
    void min();
    void mul();
    void div();
    void expe();
    void sine();
    void cose();
    void tane();
    void sqroot();
    void ln();
    void loge();
    void power();
    };


     /*1*/void mun::add()
     {
       cout<<"Continue from last answer?(y/n)";
       char ch;ch=getch();
       if(ch=='y'||ch=='Y')
       {
       a=ans;
       cout<<"The answer was: "<<ans;
       cout<<"Enter the number to add with answer: ";cin>>b;
       }
       else{
       cout<<"\nenter the two number:\n";
       cin>>a>>b;
       }
       l=a+b;
       ans=l;
       cout<<"\n****************\n";
       cout<<"*              *\n";
       cout<<"* answer: "<<l<<"  *\n";
       cout<<"*              *\n";
       cout<<"****************";
       cout<<"\n\nPress any key to continue.....";
       getch();
      }



 /*2*/void mun::min()
      {
       cout<<"Continue from last answer?(y/n)";
       char ch;ch=getch();
       if(ch=='y'||ch=='Y')
       {
       c=ans;
       cout<<"\nThe answer was: "<<ans;
       cout<<"\nNumber to subtruct from answer: ";cin>>d;
       }
       else{
       cout<<"\nenter your two number:\n";
       cin>>c>>d;
       }
       m=c-d;
       ans=m;
       cout<<"\n***************\n";
       cout<<"*             *\n";
       cout<<"* answer: "<<m<<" *\n";
       cout<<"*             *\n";
       cout<<"***************";
       cout<<"\n\nPress any key to continue.....";
       getch();
       }

  /*3*/void mun::mul()
       {
     cout<<"Continue from last answer?(y/n)";
     char ch;ch=getch();
     if(ch=='y'||ch=='Y')
     {
     e=ans;
     cout<<"\nThe answer was: "<<ans;
     cout<<"\nNumber to multiply with answer: ";cin>>f;
     }
     else{
     cout<<"\nenter two num:\n";
     cin>>e>>f;
     }
     n=e*f;
     ans=n;
     cout<<"\n*************\n";
     cout<<"*           *\n";
     cout<<"* answer: "<<n<<" *\n";
     cout<<"*           *\n";
     cout<<"*************";
     cout<<"\n\nPress any key to continue.....";
       getch();

       }

/*4*/void mun::div()
      {
       cout<<"Continue from last answer?(y/n)";
       char ch;ch=getch();
       if(ch=='y'||ch=='Y')
       {
       p=ans;
       cout<<"\nThe answer was: "<<ans;
       cout<<"\nNumber to devide from answer: ";cin>>q;
       }
       else{
    cout<<"\nur two number:\n";
    cin>>p>>q;
    }
    r=p/q;
    ans=r;
    cout<<"\n*************\n";
    cout<<"*           *\n";
    cout<<"* answer: "<< r<<" *\n";
    cout<<"*           *\n";
    cout<<"*************";
    cout<<"\n\nPress any key to continue.....";
       getch();
      }

 /*5*/void mun::expe()
   {
    cout<<"Continue from last answer?(y/n)";
       char ch;ch=getch();
       if(ch=='y'||ch=='Y')
       {
       g=ans;
       cout<<"\nThe answer was: "<<ans;
       }
       else{
       cout<<"\nthe number:";
       cin>>g;
       }
    v=exp(g);
    ans=v;
    cout<<"\n*************************\n";
    cout<<"*                       *\n";
    cout<<"* answer: "<<v<<"    *\n";
    cout<<"*                       *\n";
    cout<<"*************************";
    cout<<"\n\nPress any key to continue.....";
       getch();
    }

/*6*/void mun::sine()
    {
     cout<<"Continue from last answer?(y/n)";
       char ch;ch=getch();
       if(ch=='y'||ch=='Y')
       {
       h=ans;
       cout<<"\nThe answer was: "<<ans;
       }
       else{
     cout<<"\nThe given angle is:\n";
     cin>>h;
     }
     y=sin((h*3.1416)/180);
     ans=y;
     cout<<"\n*************************\n";
     cout<<"*                       *\n";
     cout<<"* answer: "<<y<<"      *\n";
     cout<<"*                       *\n";
     cout<<"*************************";
     cout<<"\n\nPress any key to continue.....";
     getch();
     }


/*7*/void mun::cose()
    {
    cout<<"Continue from last answer?(y/n)";
       char ch;ch=getch();
       if(ch=='y'||ch=='Y')
       {
       i=ans;
       cout<<"\nThe answer was: "<<ans;
       }
       else{
     cout<<"\nwhat is the angle:\n";
     cin>>i;
     }
     co=cos((i*3.1416)/180);
     ans=co;
     cout<<"\n*************************\n";
     cout<<"*                       *\n";
     cout<<"* answer: "<<co<<"      *\n";
     cout<<"*                       *\n";
     cout<<"*************************";
     cout<<"\n\nPress any key to continue.....";
       getch();
     }

/*8*/void mun::tane()
    {
    cout<<"Continue from last answer?(y/n)";
       char ch;ch=getch();
       if(ch=='y'||ch=='Y')
       {
       j=ans;
       cout<<"\nThe answer was: "<<ans;
       }
       else{
     cout<<"\nenter the angle:\n";
     cin>>j;
     }
     ta=tan((j*3.1416)/180);
     ans=ta;
     cout<<"\n*************************\n";
     cout<<"*                       *\n";
     cout<<"* answer: "<<ta<<"      *\n";
     cout<<"*                       *\n";
     cout<<"*************************";
     cout<<"\n\nPress any key to continue.....";
       getch();
    }

/*9*/void mun::sqroot()
   {
   cout<<"Continue from last answer?(y/n)";
       char ch;ch=getch();
       if(ch=='y'||ch=='Y')
       {
       k=ans;
       cout<<"\nThe answer was: "<<ans;
       }
       else{
    cout<<"\nenter ur number:\n";
    cin>>k;
    }
    sq=sqrt(k);
    ans=sq;
     cout<<"\n*************************\n";
     cout<<"*                       *\n";
     cout<<"* answer: "<<sq<<"      *\n";
     cout<<"*                       *\n";
     cout<<"*************************";
     cout<<"\n\nPress any key to continue.....";
       getch();
    }

/*10*/void mun::ln()

     {
     cout<<"Continue from last answer?(y/n)";
       char ch;ch=getch();
       if(ch=='y'||ch=='Y')
       {
       o=ans;
       cout<<"\nThe answer was: "<<ans;
       }
       else{
      cout<<"\nnumber is:\n";
      cin>>o;
      }
      lo=log(o);
      ans=lo;
      cout<<"\n*************************\n";
      cout<<"*                       *\n";
      cout<<"* answer: "<<lo<<"      *\n";
      cout<<"*                       *\n";
      cout<<"*************************";
      cout<<"\n\nPress any key to continue.....";
       getch();
     }

/*11*/void mun::loge()
      {
      cout<<"Continue from last answer?(y/n)";
       char ch;ch=getch();
       if(ch=='y'||ch=='Y')
       {
       s=ans;
       cout<<"\nThe answer was: "<<ans;
       }
       else{
       cout<<"\nEnter number for log:\n";
       cin>>s;
       }
       ge=log10(s);
       ans=ge;
      cout<<"\n*************************\n";
      cout<<"*                       *\n";
      cout<<"* answer: "<<ge<<"      *\n";
      cout<<"*                       *\n";
      cout<<"*************************";
      cout<<"\n\nPress any key to continue.....";
       getch();
       }

 /*12*/void mun::power()
       {
       cout<<"Continue from last answer?(y/n)";
       char ch;ch=getch();
       if(ch=='y'||ch=='Y')
       {
       t=ans;
       cout<<"\nThe answer was: "<<ans;
       cout<<"\nNumber to power of answer: ";cin>>u;
       }
       else{
       cout<<"for power fn:\n";
       cin>>t>>u;
       }
       po=pow(t,u);
       ans=po;
      cout<<"\n*************************\n";
      cout<<"*                       *\n";
      cout<<"* answer: "<<po<<"      *\n";
      cout<<"*                       *\n";
      cout<<"*************************";
      cout<<"\n\nPress any key to continue.....";
       getch();
       }



 int main()
 {
 mun w;
 int x;

 system("cls");

 do
 {
 system("cls");
 cout<<"\n\n ******** start ********";
 cout<<"\n *                     *";
 cout<<"\n *                     *";
 cout<<"\n *    1.addition       *";
 cout<<"\n *    2.substruction   *";
 cout<<"\n *    3.multipication  *";
 cout<<"\n *    4.divition       *";
 cout<<"\n *    5.expotential    *";
 cout<<"\n *    6.sine           *";
 cout<<"\n *    7.cosine         *";
 cout<<"\n *    8.tane           *";
 cout<<"\n *    9.squreroot      *";
 cout<<"\n *    10.lon           *";
 cout<<"\n *    11.log           *";
 cout<<"\n *    12.powere        *";
 cout<<"\n *    13.exit          *";
 cout<<"\n *                     *";
 cout<<"\n *                     *";
 cout<<"\n ####### end now #######\n";
 cout<<"\n";

 cin>>x;

 switch(x)
 {
 case 1:
 w.add();
 break;

 case 2:
 w.min();
 break;

 case 3:
 w.mul();
 break;

 case 4:
 w.div();
 break;

 case 5:
 w.expe();
 break;

 case 6:
 w.sine();
 break;

 case 7:
 w.cose();
 break;

 case 8:
 w.tane();
 break;

 case 9:
 w.sqroot();
 break;

 case 10:
 w.ln();
 break;

 case 11:
 w.loge();
 break;

 case 12:
 w.power();
 break;

  case 13:
 exit(0);
// break;
 default:
 cout<<"error input ;try again\n";
    }
    }while(x<=13);
       return 0;
 }
