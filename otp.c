<<<<<<< HEAD
#include <stdio.h>
int main()
{
    int otp, correct = 1234;
    printf("Enter OTP: ");
    scanf("%d", &otp);
    (otp == correct) ? printf("Verified") : printf("Invalid");
    return 0;
} 
=======
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number");
    scanf("%d", &a);

    (a >= 0) ? printf("The number is positive") : printf("The number is negative");

    return 0;
}
>>>>>>> e1207735ce378d0ee8c1cd3280dee76b3df998b3
