#include <bits/stdc++.h>
using namespace std;
 
int n,x[1<<20],y[1<<20];
long long s;
int bord;
 
int gcd(int a,int b)
{
	a=abs(a);
	b=abs(b);		
	while (a&&b)a>b?a-=b:b-=a;
	return a+b;
}
 
int main(){
cin>>n;
for (int i=0;i<n;i++)
{
	cin>>x[i]>>y[i];
}
 
x[n]=x[0];
y[n]=y[0];
for (int i=0;i<n;i++)
	s+=1ll*x[i+1]*y[i]-1ll*x[i]*y[i+1];
for (int i=0;i<n;i++)
	bord+=gcd(y[i+1]-y[i],x[i+1]-x[i]);
 
cout<<(s+2-bord)/2<<endl;
return 0;}
