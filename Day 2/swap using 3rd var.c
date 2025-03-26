#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the 1st value A= ");
	scanf("%d",&a);
	printf("Enter the 2nd value B= ");
	scanf("%d",&b);
	int c=b;
	b=a;
	a=c;
	printf("After swap,value of A=%d\n",a);
	printf("After swap,value of B=%d\n",b);
	
	return 0;
}
