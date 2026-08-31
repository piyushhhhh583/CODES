#include <stdio.h>
int main()
{
    int a[5], b[5], i;
    printf("Enter 5 elements of first array: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("Enter 5 elements of second array: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &b[i]);
    printf("Addition: ");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i] + b[i]);
    printf("\nSubtraction: ");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i] - b[i]);
    printf("\nMultiplication: ");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i] * b[i]);
    return 0;
}