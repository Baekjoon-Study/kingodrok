
#include <stdio.h>

int main(void)
{
    int fac = 1;
    int n;
    scanf("%d", &n);

    // if(n == 0)
    //     printf("1");
    
    for(int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    printf("%d", fac);

    return 0;
}