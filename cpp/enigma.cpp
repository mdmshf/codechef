#include <stdio.h>
#include <string.h>
#include <math.h>
long bin(long n) 
{int r;long binary = 0, i = 1;while(n != 0) {r = n%2;n = n/2;binary= binary + (r*i);i = i*10;}return binary;
}
int dec(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
int main()
{
	char s[33];char c1,c2;
	int t,i,j,k,n,d,q1,q2,temp;
	long b,num,num1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		char tuple[n][6];
		for(i=0;i<n;i++)
			scanf("%s",&tuple[i]);
		scanf("%s",&s);
		for(i=0;i<n;i++)
		{
			num=0;num1=0;
			for(j=0;j<5;j++)
			{
				d=0;
					temp=tuple[i][j];
					b=bin(temp);
					for(k=0;k<=j;k++)
					{
						d=b%10;
						b=b/10;
					}
					num=num*10+d;
					b=bin(temp);
					printf("b=%ld\t",b);
					for(k=0;k<=j+2;k++)
					{
						d=b%10;
						b=b/10;
					}
						printf("d=%d\n",d);
					num1=num1*10+d;
				
			}
			printf("num=%ld\n",num);
				printf("num1=%ld\n",num1);
			q1=dec(num);
			q2=dec(num1);
			printf("q1=%d\tq2=%d\n",q1,q2);
			for(j=0;j<32;j++)
			{
				if(j==q1)
					c1=s[j];
				if(j==q2)
					c2=s[j];
				
			}
			printf("%c%c ",c1,c2);
		}
	}
}
