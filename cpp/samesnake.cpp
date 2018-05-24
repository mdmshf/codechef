#include <stdio.h>
# define DIF11 ((x11==x12)&&(x12==x22)&&(y21==y22)&&(y12==y22))

# define DIF21 ((x11==x12)&&(x12==x21)&&(y21==y22)&&(y12==y21))

# define DIF31 ((x11==x12)&&(x11==x21)&&(y21==y22)&&(y11==y21))

# define DIF41 ((x11==x12)&&(x11==x22)&&(y21==y22)&&(y11==y22))

# define DIF51 ((y11==y12)&&(y12==y22)&&(x21==x22)&&(x12==x22))

# define DIF61 ((y11==y12)&&(y12==y21)&&(x21==x22)&&(x12==x21))

# define DIF71 ((y11==y12)&&(y11==y21)&&(x21==x22)&&(x11==x21))

# define DIF81 ((y11==y12)&&(y11==y22)&&(x21==x22)&&(x11==x22))
int main()
{
	int t,w,x11,x12,x21,x22,y11,y12,y21,y22;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&x11,&y11,&x12,&y12);
		scanf("%d %d %d %d",&x21,&y21,&x22,&y22);
			if(y11>y12)
			{w=y11;y11=y12;y12=w;}
			if(y21>y22)
			{w=y21;y21=y22;y22=w;}
			if(x11>x12)
			{w=x11;x11=x12;x12=w;}
			if(x21>x22)
			{w=x21;x21=x22;x22=w;}
		if((x11==x12 && x12==x21 && x21==x22))
		{
			if(y11<=y21 && y21<=y12 && y12<=y22)
			printf("yes\n");
			else if(y21<=y11 && y11<=y22 && y22<=y12)
			printf("yes\n");
			else if(y11<=y21 && y21<=y22 && y22<=y12)
			printf("yes\n");
			else if(y21<=y11 && y11<=y12 && y12<=y22)
			printf("yes\n");
			else
			printf("no\n");
		}
		else if((y11==y12 && y12==y21 && y21==y22))
		{
			if(x11<=x21 && x21<=x12 && x12<=x22)
			printf("yes\n");
			else if(x21<=x11 && x11<=x22 && x22<=x12)
			printf("yes\n");
			else if(x11<=x21 && x21<=x22 && x22<=x12)
			printf("yes\n");
			else if(x21<=x11 && x11<=x12 && x12<=x22)
			printf("yes\n");
			else
			printf("no\n");
		}
		else if(DIF11){printf("yes\n");}
		
		else if(DIF21){printf("yes\n");}
		
		else if(DIF31){printf("yes\n");}
		
		else if(DIF41){printf("yes\n");}
		
		else if(DIF51){printf("yes\n");}
		
		else if(DIF61){printf("yes\n");}
		
		else if(DIF71){printf("yes\n");}
		
		else if(DIF81){printf("yes\n");}
		
		else printf("no\n");
	}		
	return 0;
}
