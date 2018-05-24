#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#define dim 1000
int va[100];
typedef struct arc
{
int x; int y; int val;
}edge;
edge mu[dim]; // mu array of edges
// Matrix allocation
int ** alocmat (int n)
{
int i;
int ** p=(int **) malloc ((n+1)*sizeof (int *));
if ( p != NULL)
for (i=0; i<=n ;i++)
p[i] =(int *) calloc ((n+1),sizeof (int));
return p;
}
// Function for allocating the array
int *alocv(int n)
{
int *p;
p=(int *)malloc(n*sizeof(int));
return p;
}
// Function for displaying the array
void displayv(int n,int *v) //
{
int i;
printf(" { ");
for(i=0;i<n-1;i++)
printf(" %d , ",v[i]);
printf(" %d ",v[i]);
printf(" } \n");
}
// Function for displaying matrix n x n
void displaym(int **a,int n,char *c)
{
int i,j;
printf("\n %s \n\n",c);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
printf(" %2d ",a[i][j]);
printf("\n");
}
}
// Function for displaying the subgraph
void displaysg(char *c,int k,int *v)
{
int i,j;
printf("\n\n %s ",c);
displayv(k,v);
printf("\n\n");
}
// Function for displaying matrix n x n
void displaymm(int **a,int n,char *c,int k,int *v)
{
int i,j;
printf("\n %s ",c);
displayv(k,v);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
printf(" %2d ",a[i][j]);
printf("\n");
}
}
// Function for searching k in v
int search(int k,int n,int *v)
{
int i,found;
found=0;
for(i=0;i<n;i++)
if(v[i]==k)
{
found=1;
break;
}
return found;
}
//Function for reading n, m
int read_n_m(int &n, int &m, char *name)
{
FILE *f;
if((f=fopen(name,"r"))!= NULL)
{
fscanf(f,"%d %d",&n,&m);
fclose(f);
return 1;
}
else
return 0;
}
// Function for displaying the edges of the graph
void display_edges(int m)
{
 int i,val=0;
 printf("\n Graph G has %d edges \n\n",m);
 for(i=1;i<=m;i++)
 {
 printf(" Edge %d:\t ( x%d , x%d ) with value %d\n",i,mu[i].x,mu[i].y,mu[i].val);
 val+=mu[i].val;
 }
 printf(" The value of the graph is %d \n",val);
 printf("\n");
}
//Function for reading the input file and
//building the adjacency matrix
int read_graph(char *name, int **a)
{
int i,j,x,y,val,n,m;
FILE *f;
if((f=fopen(name,"r")) != NULL)
{
fscanf(f,"%d %d",&n,&m);
for(i=1;i<=m;i++)
{
fscanf(f,"%d %d %d",&mu[i].x,&mu[i].y,&mu[i].val);
a[mu[i].x][mu[i].y]=1;
}
fclose(f);
return 1;
}
else
return 0;
}
//Function for generating
//the subgraph adjacency matrix
void gen(int n,int **a,int k,int *v,int **ap)
{
int i,j;
for(i=1;i<=n;i++)
if(search(i,k,v)==1)
for(j=1;j<=n;j++)
if(search(j,k,v)==1)
ap[i][j]=a[i][j];
}
// Function for displaying the edges of the subgraph
// Compute the value of the subgraph
int display_edges_s(int n,int **ap)
{
 int i,j,m,val=0;
 for(m=1,i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 if(ap[i][j]==1)
 {
 mu[m].x=i;
 mu[m].y=j;
 m++;
 }
 m--;
 printf("\n The subgraph has %d edges \n\n",m);
 for(i=1;i<=m;i++)
 {
 printf(" The edge %d:\t ( x%d , x%d ) of value %d\n",i,mu[i].x,mu[i].y,mu[i].val);
 val+=mu[i].val;
 }
 printf("\n");
 return val;
}
//Function for reading the vertices of the next subgraph
void readf(FILE *f,int n,int *v)
{
int i;
for(i=0;i<n;i++)
fscanf(f,"%d ",&v[i]);
}
//Matrix initialization
void initm(int n,int **a)
{
int i,j;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
a[i][j]=0;
}
//Function for initializing array x
void init(int *x,int k)
{
x[k]=0;
}
//Function for testing the solution
int sol(int k,int p)
{
return k==p+1;
}
//Function for generating the successor
int successor(int *x,int k,int n)
{
int as;
if(x[k]<n)
{
as=1;
x[k]=x[k]+1;
}
else
as=0;
return as;
}
//Function for validating the solution
int validation(int *x,int k)
{
int ev,i;
ev=1;
if(k>=2 && x[k]<=x[k-1])
ev=0;
return ev;
}
// Function for writing the solution in a file
void writef(FILE *f,int k, int *x) //writeF
{
int i;
for(i=1;i<=k-1;i++)
fprintf(f,"%d ",va[x[i]]);
fprintf(f,"\n");
}
// Function for recursive backtracking
void back(int *x,int k,int n,int p, FILE *f)
{
if(sol(k,p))
writef(f,k,x);
else
{
init(x,k);
while(successor(x,k,n))
if(validation(x,k))
back(x,k+1,n,p,f);
}
}
//Main function
int main()
{
int n,m,k,**a,**ap,*v,nsg=0,i,x[100];
char name[30];
FILE *f;
printf("\n File name : ");
fflush(stdin);
gets(name);
if(read_n_m(n,m,name))
{
printf("\n Number of vertices %d \n",n);
printf(" Number of edges %d \n",m);
getch();
a=alocmat(n);
if(read_graph(name,a))
{
displaym(a,n," Graph adjacency matrix \n");
display_edges(m);
printf(" The number of vertices of the subgraph = ");
scanf("%d",&k);
if(1<=k && k<=n)
{
f=fopen("sg.txt","w");
for(i=1;i<=n;va[i]=i,i++);
back(x,1,n,k,f);
fclose(f);
v=alocv(k);
ap=alocmat(n);
f=fopen("sg.txt","r");
while(!feof(f))
{
 readf(f,k,v);
 nsg++;
 gen(n,a,k,v,ap);
 displaysg(" Subgraph ",k,v);
 displaymm(ap,n," Subgraph adjacency matrix",k,v);
 printf(" The value of the subgraph is %d\n",display_edges_s(n,ap));
 initm(n,ap);
 getch();
 }
 printf("\n\n Number of subgraphs with %d vertices = %d \n",k,nsg);
 fclose(f);
 }
 else
 printf(" Undefinied problem \n");
 getch();
}
}
}
