#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    long long int fibonacci[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i <= n; i++)
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    printf("%lld", fibonacci[n]);
    return 0;
}