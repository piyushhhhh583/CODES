
int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

void table(int n) {
    for(int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
}

void search(int a[], int n, int x) {
    for(int i=0;i<n;i++)
        if(a[i]==x) {
            printf("Found at %d",i+1);
            return;
        }
    printf("Not found");
}