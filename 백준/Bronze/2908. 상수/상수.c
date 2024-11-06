#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);

    int list_a[3] = {0};  
    int list_b[3] = {0};  

    list_a[0] = a / 100, list_a[1] = a % 100 / 10, list_a[2] = a % 100 % 10;
    list_b[0] = b / 100, list_b[1] = b % 100 / 10, list_b[2] = b % 100 % 10;

    a = list_a[2] * 100 + list_a[1] * 10 + list_a[0];
    b = list_b[2] * 100 + list_b[1] * 10 + list_b[0];

    a > b ? printf("%d", a) : printf("%d", b);

    return 0;
}