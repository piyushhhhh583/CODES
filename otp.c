#include <stdio.h>
int main()
{
    int otp, correct = 1234;
    printf("Enter OTP: ");
    scanf("%d", &otp);
    (otp == correct) ? printf("Verified") : printf("Invalid");
    return 0;
} 