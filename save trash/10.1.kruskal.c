#include<stdio.h>
#include<stdlib.h>
int cost[10][10],i,j,k,n,m,c,visit,
visited[10],l,v,count,count1,vst,p;
int main()
{
int dup1,dup2;
printf("enter no of vertices");
scanf("%d", &n);
printf("ente no of edges");
scanf("%d", &m);
printf("\nEDGES Cost\n");
for(k=1;k<=m;k++)
{
scanf("%d%d%d",&i,&j,&c);
cost[i][j]=c;
cost[j][i]=c;
}
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(cost[i][j]==0)
cost[i][j]=31999;
visit=1;
while(visit<n)
{
v=31999;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(cost[i][j]!=31999 && cost[i][j]<v  && cost[i][j]!=-1 )
{
count =0;
for(p=1;p<=n;p++)
{
if(visited[p]==i || visited[p]==j)
count++;
}
if(count >= 2)
{
for(p=1;p<=n;p++)
if(cost[i][p]!=31999 && p!=j)
dup1=p;
for(p=1;p<=n;p++)
if(cost[j][p]!=31999 && p!=i)
dup2=p;
if(cost[dup1][dup2]==-1)
continue;
}
l=i;
k=j;
v=cost[i][j];
}
printf("\nedge from %d --> %d", l,k);
cost[l][k]=-1;
cost[k][l]=-1;
visit++;
count=0;
count1=0;
for(i=1;i<=n;i++)
{
if(visited[i]==l)
count++;
if(visited[i]==k)
count1++;
} 
if(count==0)
visited[++vst]=l;
if(count1==0)
visited[++vst]=k;
}
}
