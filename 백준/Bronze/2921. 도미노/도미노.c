#include <stdio.h>

int domino(int n){
    int sum = 0;
    for(int i = n; i <= 2*n; i++){
        sum += i;
    }   
    return sum;
}

int main(void){
    int sum = 0;
    int tmp = 0;

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n+1; i++){
        sum += domino(i);
    }

    printf("%d", sum);

    return 0;
}