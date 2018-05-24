#include <stdio.h>
int main()
{
	int t,rc,bc,rt,bt,maxr,maxb;
	float ans;
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&rc,&bc,&rt);
		bt=rc+bc-rt;
		if(rc>bc)
		maxr=bc;
		else
		maxr=rc;
		if(rt>bt)
		maxb=bt;
		else
		maxb=rt;
		if(maxr<maxb)
		ans=maxb;
		else
		ans=maxr;
		printf("%.6f\n",ans);
	}
}
