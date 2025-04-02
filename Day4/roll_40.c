#include <stdio.h>

int main() 
{
    int roll = 40;
    printf("Enter roll number: ");
    scanf("%d",&roll);

    if (roll == 40)
    {
        printf("Roll number 40 is present.\n");
    } 
    else 
    {
        printf("Roll number 40 is not present.\n");
    }

    return 0;
}