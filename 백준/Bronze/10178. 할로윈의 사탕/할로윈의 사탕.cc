
#include <stdio.h>

int main(void)
{
    int test_case;
    int candy, brothers;

    scanf("%d", &test_case);

    for(int i = 0 ; i < test_case; i++)
    {   
        scanf("%d %d", &candy, &brothers);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", candy / brothers, candy % brothers);
    }
    return 0;
}