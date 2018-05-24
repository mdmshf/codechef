#include<stdio.h>
#define g getchar_unlocked
int read()
 
{
    int n=0;
    char ch = getchar_unlocked();
    while (ch<'0' || ch>'9' )
    {
        ch = getchar_unlocked();
    }
    while(ch>='0' && ch<='9')
    {
        n = (n<<3) + (n<<1) + ch -'0';
        ch=getchar_unlocked();
    }
    return n;
}
 
int main()
 {
 int t,i,temp1=0,temp2=0;
 int test;
 scanf("%d",&test);
 while(test--)
 {
     t=read();
     int a[1000005],temp1=0,temp2=0;
     for(i=0;i<t;++i)
     a[i]=read();
     for(i=0;i<t;++i)
     {
        if(a[i]>temp1){
        temp2=temp1;
        temp1=a[i];
         }
         else if( a[i]>temp2 && a[i]<temp1)
         temp2=a[i];
     }
     printf("%d\n",temp2);
 }
return 0;
}
