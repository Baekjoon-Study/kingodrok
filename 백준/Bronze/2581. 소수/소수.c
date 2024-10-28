#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int n);

int main(void){
    int m, n;
    scanf("%d %d", &m, &n);
    int sum = 0;
    int min = 0;

    if(n == 1){

    }
    for(int i = m; i <= n; i++){
        if(is_prime(i)){
            sum += i;
        }
    }

    for(int i = m; i <= n; i++){
        if(is_prime(i)){
            min = i;
            break;
        }
    }

    if(sum == 0){
        printf("-1");
    }
    else{
        printf("%d\n%d", sum, min);
    }

    return 0;
}

int is_prime(int n){
    if(n == 1){
        return 0;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}