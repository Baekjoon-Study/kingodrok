
#include <stdio.h>

int main(void)
{
    int n, student, apple;
    int left = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &student, &apple);
        left += apple % student;
    }
    printf("%d", left);

    return 0;
}