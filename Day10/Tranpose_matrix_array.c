#include <stdio.h>

int main() 
{
    int m, n, i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d", &m, &n);
    int a[m][n], t[n][m];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) 
	{
        for(j = 0; j < n; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < m; i++) 
	{
        for(j = 0; j < n; j++) 
		{
            t[j][i] = a[i][j];
        }
    }
    printf("\nTranspose of the matrix is:\n");
    for(i = 0; i < n; i++) 
	{
        for(j = 0; j < m; j++) 
		{
            printf("%d  ",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
