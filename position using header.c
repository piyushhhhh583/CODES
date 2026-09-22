#include <stdio.h>
#include "header.h"

int main() {
    int a[5], x;

    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("Enter number: ");
    scanf("%d",&x);

    search(a,5,x);

    return 0;
}