#include<stdio.h>
int main() {
    int n=10;
    int sum_of_squares;
    sum_of_squares=(n*(n+1)*(2*n+1))/6;
    printf("The sum of the square of the first %d natural numbers is: %d\n", n, sum_of_squares);
    return 0;
}