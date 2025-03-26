#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers:\n");
    printf("Number a: ");
    scanf("%d", &a);
    printf("Number b: ");
    scanf("%d", &b);
    printf("Number c: ");
    scanf("%d", &c);

    
    if (a >= b) {
        if (a >= c) {
            printf("The greatest number is: %d\n", a);
        } else {
            printf("The greatest number is: %d\n", c);
        }
    } else {
        if (b >= c) {
            printf("The greatest number is: %d\n", b);
        } else {
            printf("The greatest number is: %d\n", c);
        }
    }

    return 0;
}
