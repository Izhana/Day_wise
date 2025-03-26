#include <stdio.h>

int main() {
    int a = 0, b = 1, s, n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
	{
        printf("%d ", a);
        s = a + b;
        a = b;
        b = s;
    }

    return 0;
}
