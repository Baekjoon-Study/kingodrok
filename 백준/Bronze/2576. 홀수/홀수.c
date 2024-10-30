#include <stdio.h>

int main(void){
    int list[7] = {0};
    int sum = 0;
    int min = 99;

    for(int i = 0; i < 7; i++){
        scanf("%d", &list[i]);
        if(list[i]%2 == 1){
            sum += list[i];
            if(min > list[i]){
                min = list[i];
            }
        }
    }
    if(min == 99 && sum == 0){
        printf("-1");
    }
    else{
        printf("%d\n%d", sum, min);
    }


    return 0;
}