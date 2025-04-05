#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number == 0) 
    {
        sum = 1;
    } 
    else 
    {
        while (number > 0) 
	{
            sum++;
            number = number / 10; 
        }
    }

    printf("The number of digits is: %d\n", sum);

    return 0;
}
