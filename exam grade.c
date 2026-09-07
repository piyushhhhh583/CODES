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
}