#include <stdio.h>

int main(void){
    int sum[5] = {0};
    int player = 1;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int score = 0;
            if(i == j){
                continue;
            }
            else{
                scanf("%d", &score);
                sum[i] += score;
            }
        }
    }
    int max = sum[0];
    for(int i = 0; i < 5; i++){
        if(max < sum[i]){
            max = sum[i];
            player = i+1;
        }
    }
    printf("%d %d", player, max);

    return 0;
}