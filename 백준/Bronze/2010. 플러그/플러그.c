
#include <stdio.h>

int main(void)
{
    int n, plug, cpu;
    int tmp = 1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &plug);
        tmp += plug-1;
    }
    printf("%d", tmp);

    return 0;
}