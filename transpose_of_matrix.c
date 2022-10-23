//Code contributed by Sneha Jaiswal


#include <stdio.h>

void main()
{
    static int array[10][10],transpose[10][10];
    int i, j, m, n;
 
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the coefficients of the matrix\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0;i < m;i++)
    {
        for (j = 0; j < n; j++)
        {   
            transpose[j][i] = array[i][j];
        }
    }
 

    printf("Transpose of matrix is \n");
    for (i = 0; i< n; i++)
    {
        for (j = 0; j < m; j++)
        {
           printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
