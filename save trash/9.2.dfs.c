#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int cost[10][10],i,j,k,n,stk[10],top,v;
int visit[10],visited[10];

void main()
{
int m;
printf("enterno of vertices");
scanf("%d",&n);
printf("ente no of edges");
scanf("%d",&m);
printf("\nEDGES \n");
for(k=1;k<=m;k++)
{
scanf("%d%d",&i,&j);
cost[i][j]=1;
}
printf("enter initial vertex");
scanf("%d",&v);
printf("ORDER OF VISITED VERTICES");
printf("%d",v);
printf(" ");
visited[v]=1;
k=1;
while(k<n)
{
for(j=n;j>=1;j--)
if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
{
visit[j]=1;
stk[top]=j;
top++;
}
v=stk[--top];
printf("%d",v);
printf(" ");
k++;
visit[v]=0; visited[v]=1;
}
}

OUTPUT
enterno of vertices9
ente no of edges9

EDGES
1 2
2 3
2 6
1 5
1 4
4 7
5 7
7 8
8 9
enter initial vertex1
ORDER OF VISITED VERTICES1 2 3 6 4 7 8 9 5
