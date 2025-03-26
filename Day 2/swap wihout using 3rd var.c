#include<stdio.h>
int main() 
{
	int a,b;
	printf("Enter the 1st value A= ");
	scanf("%d",&a);
	printf("Enter the 2nd value B= ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap,value of A=%d\n",a);
	printf("After swap,value of B=%d\n",b);
	
	return 0;
}
