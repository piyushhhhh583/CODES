#include <stdio.h>
int main()
{
    int a[2][2], b[2][2];
    int i, j, k, mul;
    printf("Enter first matrix:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &a[i][j]);
    printf("Enter second matrix:\n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &b[i][j]);
    printf("\nAddition:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
    printf("\nSubtraction:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ", a[i][j] - b[i][j]);
        printf("\n");
    }
    printf("\nMultiplication:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            mul = 0;
            for(k=0; k<2; k++)
                mul = mul + a[i][k] * b[k][j];
            printf("%d ", mul);
        }
        printf("\n");
    }
    return 0;
}