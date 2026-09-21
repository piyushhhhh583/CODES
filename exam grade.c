<<<<<<< HEAD
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
=======
#include <stdio.h>

int main() {
    int eng, hin, maths, sci, sst, total;
    float per;

    printf("Enter your marks of the subjects: ");
    scanf("%d %d %d %d %d", &eng, &hin, &maths, &sci, &sst);

    total = eng + hin + maths + sci + sst;
    per = ((float)total / 500) * 100;

    if (per >= 90) {
        printf("A grade\n");
    } else if (per >= 75) {
        printf("B grade\n");
    } else if (per >= 50) {
        printf("C grade\n");
    } else {
        printf("D grade\n");
    }

    return 0;
>>>>>>> e1207735ce378d0ee8c1cd3280dee76b3df998b3
}