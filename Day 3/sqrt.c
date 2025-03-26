#include<stdio.h>
#include<math.h>
int main()
{
    float number,sq;
    printf("enter the number");
    scanf("%f",&number);
    sq=sqrt(number);
    printf("sqrt of the number %.2f is %.2f", number, sq);
}