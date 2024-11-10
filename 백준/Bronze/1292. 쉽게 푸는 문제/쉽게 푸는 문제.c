#include <stdio.h>

int main(void){
    long long int list[10000] = {0};
    int tmp = 0;
    int tmp2 = 1;

    int a, b, sum = 0;

    while(tmp<100){
        for(int i = 0; i < tmp; i++){
            list[tmp2] = tmp;
            tmp2++;
            }
        tmp++;
    }

    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        sum += list[i];
    }
    printf("%d", sum);

    return 0;
}