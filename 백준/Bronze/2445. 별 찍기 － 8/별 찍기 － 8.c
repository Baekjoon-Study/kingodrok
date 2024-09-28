
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
            printf("*");
        for(int k = 2*i; k < 2*n; k++)
            printf(" ");
        for(int x = 0; x < i; x++)
            printf("*");
        printf("\n");
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = i; j < n; j++)
            printf("*");
        for(int k = 0; k < 2*i; k++)
            printf(" ");
        for(int x = i; x < n; x++)
            printf("*");
        printf("\n");
    }
    return 0;
}