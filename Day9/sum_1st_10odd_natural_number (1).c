#include <stdio.h>

int main() {
    int i,a = 0;
    for (int i = 1; i <= 20; i+=2) 
	{
        a=a+i; 
    }

    printf("Sum of first 10 odd natural Number is = %d\n", a);

    return 0;
}
