#include <stdio.h>

int main(void){
    int n;
    char list[101] = "";
    int sum = 0;
    scanf("%d", &n);
    scanf("%s", list);

    for(int i = 0; i < n; i++){
        sum += list[i] - '0';
    }
    printf("%d", sum);

    return 0;
}