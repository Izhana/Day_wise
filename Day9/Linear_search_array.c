#include<stdio.h>
void main()
{
	int a[50],n,d,i;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Enter %d elements::",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter searching element::\n");
	scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		if(a[i]==d)
		{
			printf("Found\n");
			break;
		}
	}
		if(i==n)
		{
			printf("Not Found\n");
		}
	}
