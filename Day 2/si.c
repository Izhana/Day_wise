#include<stdio.h>
int main()
{
	int p,t,si;
	float r;
	printf("Enter the value of principal amt ");
	scanf("%d",&p);
	printf("Enter the value of time period ");
	scanf("%d",&t);
	printf("Enter the value of rate of interest ");
	scanf("%f",&r);
	si=(p*r*t)/100;
	printf("The value of the si is = %d",si);
	return 0;
}
