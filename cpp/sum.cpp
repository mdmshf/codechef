#include <stdio.h>

int main()
{
    int t,d,i,so,l,j,se,c,n;
    scanf("%d",&t);
    while(t--)
    {
        se=so=i=0,l=0;j=0;
        scanf("%d",&n);
        c=n;
        while(c>0)
        {
            l++;
            c=c/10;
        }
        for(i=1;i<=l;i++)
        {
            d=n%10;
            if(l%2==0)
            {
                if(j%2==0)
                 se+=d;
                 else
                 so+=d;
                 
            }
            else
            {
                if(j%2==0)
                so+=d;
                  else
                              se+=d;
                  
            }
             j++;
             n=n/10;
        }
        printf("se=%dso=%d\n",se,so);
        if(se>so)
        printf("friendly\n");
        if(so>se)
        printf("evil\n");
    }
    return 0;
}

