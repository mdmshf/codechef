#include <stdio.h>
#include <string.h>
int main(){
	int t,c,c1,c2,i,l=0;char s[100001];
	scanf("%d",&t);
	while(t--){
		for(i=0;i<=l;i++)
			s[i]='\0';
		scanf("%s",&s);
		l=strlen(s);c=0;c1=0;
		for(i=0;i<l;i++)
		{	
			c1=0;
			if(s[i]=='<'){
				c1++;
				if(i==l-1) ;
				else
				while(s[i+1]=='<' || s[i+1]=='='){
					if(s[i+1]=='<'){
						i++;c1++;	
					}
					else
						i++;
					
				}
			}
			else if(s[i]=='>'){
				c1++;
				if(i==l-1) ;
				else
				while(s[i+1]=='>' || s[i+1]=='='){
					if(s[i+1]=='>'){
						i++;c1++;
					}
					else
						i++;
				}
			}
			else{
					;
			}
			
			if(c1>c)
				c=c1;
		}
	printf("%d\n",c+1);
	}
	return 0;
}
