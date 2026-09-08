#include <stdio.h>
int main()
{
    int SE, COA, C, AI, web, total;
    float per;
    printf("Enter 5 marks: ");
    scanf("%d%d%d%d%d", &SE, &COA, &C, &AI, &web);
    total = SE + COA + C + AI + web;
    per = total / 5.0;
    printf("Percentage = %.2f%%\n", per);
    if (per >= 90)
        printf("A Grade");
    else if (per >= 75)
        printf("B Grade");
    else if (per >= 50)
        printf("C Grade");
    else
        printf("Fail");
    return 0;
}