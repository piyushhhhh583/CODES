#include <stdio.h>

int main()
{
    int ch, n, d, r, b, p;
    char h[20];

    do
    {
        printf("\n1.Decimal-Binary\n2.Binary-Decimal\n3.Decimal-Octal\n4.Octal-Decimal\n5.Decimal-Hexadecimal\n6.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch == 1 || ch == 3 || ch == 5)
        {
            printf("Enter decimal: ");
            scanf("%d", &n);
            d = n;
            p = 0;

            if (ch == 5)
            {
                printf("Hexadecimal: ");
                if (n == 0) printf("0");
                while (n)
                {
                    r = n % 16;
                    printf("%c", r < 10 ? r + '0' : r - 10 + 'A');
                    n /= 16;
                }
            }
            else
            {
                b = (ch == 1) ? 2 : 8;
                n = 0; p = 1;

                while (d)
                {
                    n += (d % b) * p;
                    d /= b;
                    p *= 10;
                }
                printf("%s: %d", ch == 1 ? "Binary" : "Octal", n);
            }
        }
        else if (ch == 2 || ch == 4)
        {
            printf("Enter number: ");
            scanf("%d", &n);
            b = (ch == 2) ? 2 : 8;
            d = 0; p = 1;

            while (n)
            {
                d += (n % 10) * p;
                n /= 10;
                p *= b;
            }

            printf("Decimal: %d", d);
        }
        else if (ch != 6)
            printf("Invalid choice!");

    } while (ch != 6);

    return 0;
}