#include <stdio.h>
int main()
{
	int t,i,l,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&l,&b);
		for(i=1;;i++)
		{
			if(i%2!=0)
			{
				if(l>=i)
				{
					l-=i;
				}
				else
				{
					printf("Bob\n");
					break;
				}
			}
			else
			{
				if(b>=i)
				{
					b-=i;
				}
				else
				{
					printf("Limak\n");
					break;
				}
			}
			//printf("i=%d\tl=%d\tb=%d\n",i,l,b);
		}
	}
	return 0;
}
