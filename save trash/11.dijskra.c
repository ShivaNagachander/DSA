#include<stdio.h>
int shortest(int ,int);
int cost[10][10],dist[20],i,j,n,k,m,
S[20],v,totcost,path[20],p;
void main()
{
int c;
printf("enter no of vertices");
scanf("%d",&n);
printf("enter no of edges"); 
scanf("%d",&m);
printf("\nenter EDGE Cost\n");
for(k=1;k<=m;k++)
{
scanf("%d%d%d",&i,&j,&c);
cost[i][j]=c;
}
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(cost[i][j]==0)
cost[i][j]=31999;
printf("enter initial vertex\n");
scanf("\n%d",&v);
printf("\n%d", v);
shortest(v,n);
 }
shortest(int v,int n)
{
int min;
for(i=1;i<=n;i++)
{
S[i]=0;
dist[i]=cost[v][i];
}
path[++p]=v;
S[v]=1;
dist[v]=0;
for(i=2;i<=n-1;i++)
{
k=-1;
min=31999;
for(j=1;j<=n;j++)
{
if(dist[j]<min && S[j]!=1)
{
min=dist[j];
k=j;
} 
}
if(cost[v][k]<=dist[k])
p=1;
path[++p]=k;
for(j=1;j<=p;j++)
printf("\t%d",path[j]);
printf("\n");
//printf("%d",k);
S[k]=1;
for(j=1;j<=n;j++)
if(cost[k][j]!=31999 && dist[j]>=dist[k]+cost[k][j] && S[j]!=1)
 dist[j]=dist[k]+cost[k][j];
}
}

output:
enter no of vertices6
enter no of edges11
enter EDGE Cost
1 2 50
1 3 45
1 4 10
2 3 10
2 4 15
3 5 30
4 1 10
4 5 15
5 2 20
5 3 35
6 5 3
enter initial vertex
1
1	1	4
	1	4	5
	1	4	5	2
	1	3
