#include<stdio.h>
void main()
{
	int n,i,root,c,t;
	printf("enter number of elements : \n");
	scanf("%d",&n);
	int h[n];
	printf("enter elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&h[i]);
	}
	for(i=0;i<n-1;i++)
	{	
		c=i+1;
		while(c!=0)
		{
			root=(c-1)/2;
			if(h[root]<h[c])
			{
				t=h[root];
				h[root]=h[c];
				h[c]=t;
			}
			c=root;
		}
	}
	printf("max heap : \n");
	for(i=0;i<n;i++)
	printf("%d ",h[i]);
}
