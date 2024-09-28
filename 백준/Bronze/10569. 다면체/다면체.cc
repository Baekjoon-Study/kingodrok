
#include <stdio.h>

int main(void)
{
    int t, a, b;
    int c = 0;
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        c = 2 - a + b;
        printf("%d\n", c);
    }
    return 0;
}