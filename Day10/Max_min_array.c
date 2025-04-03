#include<stdio.h>
int main()
{
	int m[10],i=0,max=0,min=9999999;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<10;i++)
	{
		if(m[i]>max)
		{
			max=m[i];
		}
		if(m[i]<min)
		{
			min=m[i];
		}
	}
	printf("Largest value in the array = %d\n",max);
	printf("Smallest value in the array = %d",min);
}
