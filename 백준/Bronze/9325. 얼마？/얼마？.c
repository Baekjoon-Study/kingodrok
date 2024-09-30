
#include <stdio.h>

int main(void)
{
    int test_case, price, option, number_of_option;
    int sum = 0;

    scanf("%d", &test_case);        

    for(int i = 0; i < test_case; i++)
    {
        scanf("%d", &price);       
        sum = price;               

        scanf("%d", &option);
        for(int j = 0; j < option; j++)
        {
            scanf("%d", &number_of_option);
            scanf("%d", &price);
            sum += number_of_option * price;          
        }
        printf("%d\n", sum);
    }

    return 0;
}