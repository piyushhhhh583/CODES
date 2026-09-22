#include <stdio.h>

int main() {
    int a[2][2], b[2][2], r[2][2];
    int i,j,k;

    printf("Enter Matrix A:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++) scanf("%d",&a[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++) scanf("%d",&b[i][j]);

    printf("\nAddition:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            r[i][j]=a[i][j]+b[i][j];
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            r[i][j]=a[i][j]-b[i][j];
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplication:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            r[i][j]=0;
            for(k=0;k<2;k++)
                r[i][j]+=a[i][k]*b[k][j];
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }

    return 0;
}