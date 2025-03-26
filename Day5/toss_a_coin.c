#include <stdio.h>
int main() {
    srand(time(0)); // Seed the random number generator
    if (rand() % 2 == 0) {
        printf("Heads\n");
    } else {
        printf("Tails\n");
    }
    return 0;
}