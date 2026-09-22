<<<<<<< HEAD
#include <stdio.h>
int main() {
    int a[2][2], b[2][2], r[2][2];
    int i, j, k, ch;
    printf("Enter Matrix A:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    printf("Enter Matrix B:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);
    printf("1.Add  2.Subtract  3.Multiply\n");
    scanf("%d",&ch);
    switch(ch) {
        case 1:
            for(i=0;i<2;i++)
                for(j=0;j<2;j++)
                    r[i][j]=a[i][j]+b[i][j];
            break;
        case 2:
            for(i=0;i<2;i++)
                for(j=0;j<2;j++)
                    r[i][j]=a[i][j]-b[i][j];
            break;
        case 3:
            for(i=0;i<2;i++)
                for(j=0;j<2;j++) {
                    r[i][j]=0;
                    for(k=0;k<2;k++)
                        r[i][j]+=a[i][k]*b[k][j];
                }
            break;
        default:
            printf("Wrong choice");
            return 0;
    }
    printf("Result:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++)
            printf("%d ",r[i][j]);
        printf("\n");
    }
    return 0;
=======
#include <stdio.h>

int main() {
    int a[2][2], b[2][2], r[2][2];
    int i, j, k, ch;

    printf("Enter Matrix A:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);

    printf("1.Add  2.Subtract  3.Multiply\n");
    scanf("%d",&ch);

    switch(ch) {
        case 1:
            for(i=0;i<2;i++)
                for(j=0;j<2;j++)
                    r[i][j]=a[i][j]+b[i][j];
            break;

        case 2:
            for(i=0;i<2;i++)
                for(j=0;j<2;j++)
                    r[i][j]=a[i][j]-b[i][j];
            break;

        case 3:
            for(i=0;i<2;i++)
                for(j=0;j<2;j++) {
                    r[i][j]=0;
                    for(k=0;k<2;k++)
                        r[i][j]+=a[i][k]*b[k][j];
                }
            break;

        default:
            printf("Wrong choice");
            return 0;
    }

    printf("Result:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++)
            printf("%d ",r[i][j]);
        printf("\n");
    }

    return 0;
>>>>>>> ac292352d88c5cd03908ad5c396d34f20145bc78
}