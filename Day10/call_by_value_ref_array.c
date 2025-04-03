#include<stdio.h>

void inc(int x)
{
    x+=1;
    printf("Value of X from the function : %d",x);
}
void incre(int *x)
{
    *x+=1;
    printf("Value of X from the function : %d",*x);
}
int main()
{
    int x=10;
    inc(x);
    printf("\nValue of X from the main : %d",x);
    incre(&x);
    printf("\nValue of X from the main : %d",x);
    return 0;
}
