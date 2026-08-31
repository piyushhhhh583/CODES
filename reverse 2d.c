#include <stdio.h>
int main()
{
    int a[2][2], i, j;
    printf("Enter 4 numbers: ");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Reverse array:\n");
    for(i = 1; i >= 0; i--)
    {
        for(j = 1; j >= 0; j--)
            printf("%d ", a[i][j]);

        printf("\n");
    }
    return 0;
}