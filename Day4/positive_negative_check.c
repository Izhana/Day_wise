// Enter a number and check whether it's a positive,negative
#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number= ");
	scanf("%d",&n);
	if(n<0)
	printf("It is a negative no. ");
	if(n>=0)
	printf("It is a positive no. ");
	return 0;
}