#include<stdio.h>
char str[5001],arr[1000][1000];
int n,l;
int run(int,int);
int main()
{
	int t,i,j,temp=0;
	//char str[5000],arr[1000][1000];
	scanf("%d",&t);
	while(t--)
	{
		 scanf("%d%d",&l,&n);
		 scanf("%s",&str);
		// printf("%d",n);
		// printf("%s",str);
		 for(i=0;i<n;i++)
		 {
		 	scanf("%s",arr[i]);
		 }
		 //for(i=0;i<n;i++)
		 //{
		 //	for(j=0;j<n;j++)
		 //	{
		 //		printf("%c ",arr[i][j]);
		//	 }
		//	 printf("\n");
		 //}
		 temp=0;
		 for(i=0;i<n;i++)
		 {
		 	for(j=0;j<n;j++)
		 	{
		 			/*if(i==0 && j==0)
					 {
					 	if(arr[i][j]=='.')
					 	temp=run(i,j);
					 	else
					 	continue;
					 	printf("ran one time\n");
						 }	
					else
					{
						if(arr[i][j]=='.')
						temp=temp^run(i,j);
						else
						continue;
						printf("ran multiple time\n");
					}*/
					if(arr[i][j]=='.')
					{
						temp=temp^run(i,j);
		//				printf("ran multiple time run:%d\n",run(i,j));
					}
					else
					continue;
			 }
		 }
		 printf("%d\n",temp);
	}
 return 0;
}

int run(int i,int j)
{ 
	int k,temp=0;
	for(k=0;k<l;k++)
	{
		if(str[k]=='L')
		{
			if((j>0)&&(arr[i][j-1]=='.'))
			{
				j=j-1;
				temp++;
			}
			else
			return temp;
		}
		else if(str[k]=='R')
		{
			if((j<n-1)&&(arr[i][j+1]=='.'))
			{
				j=j+1;
				temp++;
			}
			else
			return temp;
		}
		else if(str[k]=='U')
		{
			if((i>0)&&(arr[i-1][j]=='.'))
			{
				i=i-1;
				temp++;
			}
			else
			return temp;
		}
		else
		{
			if((i<n-1)&&(arr[i+1][j]=='.'))
			{
				i=i+1;
				temp++;
			}
			else
			return temp;
		}
	}
	return temp;
}
