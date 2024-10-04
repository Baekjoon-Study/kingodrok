
#include <stdio.h>

int main(void)
{
    int n, k;
    int tmp = 0;

    scanf("%d %d", &n, &k);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {   tmp ++;}
            if(tmp == k)
            {
                printf("%d", i);
                break;
            }
        
    }
    if(tmp < k)
        printf("0\n");
    return 0;
}