#include <stdio.h>
#include <conio.h>
int main()
{
	int d1;int d2;int m1;int m2;int y1;int y2;int i;int d=0;int m[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	printf("enter start date\t=\t");
	scanf("%d/%d/%d",&d1,&m1,&y1);
	printf("enter end date\t\t=\t");
	scanf("%d/%d/%d",&d2,&m2,&y2);
	if(m1<m2)
	{
		d=365*(y2-y1);
		d+=(m[m1]-d1);
		d=d+d2;
		for(i=m1+1;i<m2;i++)
			d+=m[i];
	}
	else if(m1==m2)
	{
		d=365*(y2-y1);
		d+=d2-d1;
	}
	else
	{
		d=365*(y2-y1-1);
		d=d+(m[m1]-d1);
		d=d+d2;
		for(i=m1+1;i<=12;i++)
			d+=m[i];
		for(i=1;i<m2;i++)
			d+=m[i];
	}
	for(i=y1;i<=y2;i++)
		if(i%4==0)
		d++;
	printf("number of days\t\t=\t%d",d);
	return 0;
}
