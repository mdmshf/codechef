#include <stdio.h>
int main()
{
	int i,v,t;
	scanf("%d",&t);
	if(t>=1 && t<=1000)
	{
		while(t--)
		{
			scanf("%d %d",&i,&v);
			while(i>0 || v>0)
			{
				if(i>0 && v>0)
					v--;
				else if(i>0 && v==0)
				{
					if(i%2==0)
					printf("SAMBAR");
					else
					printf("IDLY");
					break;
				}
				
				else if(i==0 && v>0)
				{
					printf("VADA");
					break;
				}
			}
		}
	}
}
