#include <stdio.h>

int main() {
    int a[5], b[5], r[5];
    int i, ch;

    printf("Enter 5 elements of A:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("Enter 5 elements of B:\n");
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);

    printf("1.Add  2.Subtract  3.Multiply\n");
    scanf("%d",&ch);

    switch(ch) {
        case 1:
            for(i=0;i<5;i++)
                r[i]=a[i]+b[i];
            break;

        case 2:
            for(i=0;i<5;i++)
                r[i]=a[i]-b[i];
            break;

        case 3:
            for(i=0;i<5;i++)
                r[i]=a[i]*b[i];
            break;

        default:
            printf("Wrong choice");
            return 0;
    }

    printf("Result:\n");
    for(i=0;i<5;i++)
        printf("%d ",r[i]);

    return 0;
}