#include <stdio.h>

int main(void){
    int m, n;
    scanf("%d %d", &m, &n);

    int sum = 0;
    int min;

    for(int i = 1; i < n; i++){
        if(i * i >= m && i * i <= n){
            sum += i*i;
            }
        }
    
    for(int i = 1; i < n; i++){
        if(i * i >= m){
            min = i * i;
            if(min != 0){
                break;
            }
        }
    }
    
    if(sum == 0){
        printf("-1");
    }
    else{
        printf("%d\n", sum);
        printf("%d", min);
    }

    return 0;
    
}