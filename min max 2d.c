#include <stdio.h>
int main()
{
    int a[2][2], i, j, min, max;
    printf("Enter 4 numbers: ");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    min = max = a[0][0];
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            if(a[i][j] < min)
                min = a[i][j];

            if(a[i][j] > max)
                max = a[i][j];
        }
    }
    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);
    return 0;
}