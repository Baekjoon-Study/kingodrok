#include <stdio.h>

int main(void)
{   
    int n, num;
    int num2 = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int is_prime = 1;

        scanf("%d", &num);
        if(num == 1)
        {   is_prime = 0;}

        else{
            for(int j = 2; j < num; j++)
            {
                if(num % j == 0) 
                {
                    is_prime = 0;
                    break;
                }
            }
            if(is_prime)
            {
                num2++;
            }
        }
    }
    printf("%d", num2);
    return 0;
}