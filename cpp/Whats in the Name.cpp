#include <stdio.h>
#include <string.h>
int main()
{
	int t,i,l,a,b,c[3];char s[33];
	scanf("%d",&t);
	while(t--)
	{
	//	printf("Enter name   :  ");
		scanf(" %[^\n]s",s);
	//	printf("%s\n",s);
		l=strlen(s);c[0]=0;c[1]=0;c[2]=0;a=0;b=0;
		c[0]=0;
		for(i=0;i<l;i++)
		{
			if(s[i]==' ')
			{
				a++;c[a]=i+1;
			}
			if(a==2)
				break;
		}
		for(i=0;i<3;i++)
		{
			if(a==0)
			{
				for(i=0;i<l;i++)
				{
					if(i==0 && s[0]>=65 && s[0]<=90)
						printf("%c",s[0]);
					else if(i==0 && s[0]>=97 && s[0]<=122)
						printf("%c",s[0]-32);
					else if(i!=0 && s[i]>=65 && s[i]<=90)
						printf("%c",s[i]+32);
					else if(i!=0 && s[i]>=97 && s[i]<=122)
						printf("%c",s[i]);
					else
						;
				}printf("\n");	
			}
			else if(a==1)
			{
				if(s[c[0]]>=65 && s[c[0]]<=90)
					printf("%c. ",s[c[0]]);
				else if(s[c[0]]>=97 && s[c[0]]<=122)
					printf("%c. ",s[c[0]]-32);
				else
					;
				for(i=c[1];i<l;i++)
				{
					if(i==c[1] && s[i]>=65 && s[i]<=90)
						printf("%c",s[i]);
					else if(i==c[1] && s[i]>=97 && s[i]<=122)
						printf("%c",s[i]-32);
					else if(i!=c[1] && s[i]>=65 && s[i]<=90)
						printf("%c",s[i]+32);
					else if(i!=c[1] && s[i]>=97 && s[i]<=122)
						printf("%c",s[i]);
					else
						;
				}printf("\n");
			}
			else
			{
				if(s[c[0]]>=65 && s[c[0]]<=90)
					printf("%c. ",s[c[0]]);
				else if(s[c[0]]>=97 && s[c[0]]<=122)
					printf("%c. ",s[c[0]]-32);
				else
					;
				if(s[c[1]]>=65 && s[c[1]]<=90)
					printf("%c. ",s[c[1]]);
				else if(s[c[1]]>=97 && s[c[1]]<=122)
					printf("%c. ",s[c[1]]-32);
				else
					;
				for(i=c[2];i<l;i++)
				{
					if(i==c[2] && s[i]>=65 && s[i]<=90)
						printf("%c",s[i]);
					else if(i==c[2] && s[i]>=97 && s[i]<=122)
						printf("%c",s[i]-32);
					else if(i!=c[2] && s[i]>=65 && s[i]<=90)
						printf("%c",s[i]+32);
					else if(i!=c[2] && s[i]>=97 && s[i]<=122)
						printf("%c",s[i]);
					else
						;
				}printf("\n");
			}
		}
	}
}
