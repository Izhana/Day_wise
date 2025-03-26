#include <stdio.h>

int main() {
    int i,a = 0;
    for (int i = 1; i <= 10; i++) 
	{
        a += i * i; 
    }
    printf("Sum of squares of first 10 natural numbers = %d\n", a);

    return 0;
}
