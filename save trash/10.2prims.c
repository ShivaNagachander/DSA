#include<stdio.h>
#include<stdlib.h>
int cost[10][10],i,j,k,n,stk[10],top,v,visit[10],visited[10],u;
void main()
{
int m,c;
printf("enterno of vertices");
scanf("%d", &n);
printf("ente no of edges");
scanf("%d", &m);
printf("\nEDGES Cost\n");
for(k=1;k<=m;k++)
{
scanf("%d%d%d",&i,&j,&c);
cost[i][j]=c;
}
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(cost[i][j]==0)
cost[i][j]=31999;
printf("\t ORDER OF VISITED VERTICES");
k=1;
while(k<n)
{
m=31999;
if(k==1)
{
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
if(cost[i][j]<m)
{			
m=cost[i][j];
u=i;
}
}
else
{
for(j=n;j>=1;j--)
if(cost[v][j]<m && visited[j]!=1 && visit[j]!=1)
{
visit[j]=1;
stk[top]=j;
top++;
m=cost[v][j];
u=j;
}
}
cost[v][u]=31999;
v=u;
printf("\t %d",v);
k++;
visit[v]=0; visited[v]=1;
}
}
enterno of vertices7
ente no of edges9
EDGES Cost
1 6 10
6 5 25
5 4 22
4 3 12
3 2 16
2 7 14
5 7 24
4 7 18
1 2 28
ORDER OF VISITED VERTICES	
 1 6 5 4 3 2
prims.txt
Displaying prims.txt.