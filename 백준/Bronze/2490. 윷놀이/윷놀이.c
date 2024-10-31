#include <stdio.h>

int main(void){
    int yut[4];
    
    for(int i = 0; i < 3; i++){    
        int sum = 0;
        for(int j = 0; j < 4; j++){
            scanf("%d", &yut[j]);
            sum += yut[j];
        }

        int backs = 4 - sum;  // 배(0)의 개수를 계산

        if(backs == 1){
            printf("A\n");
        }
        else if(backs == 2){
            printf("B\n");
        }
        else if(backs == 3){
            printf("C\n");
        }
        else if(backs == 4){
            printf("D\n");
        }
        else if(backs == 0){
            printf("E\n");
        }
    }

    return 0;
}
