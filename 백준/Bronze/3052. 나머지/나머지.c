#include <stdio.h>

int main(void){
    int list[10] = {0};
    int remain[10] = {0};
    int difference = 10;
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &list[i]);
        remain[i] = list[i] % 42;
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < i; j++){
            if(remain[j] == remain[i]){
                difference --;
                break;
            }
        }
    }

    printf("%d", difference);

    return 0;
}