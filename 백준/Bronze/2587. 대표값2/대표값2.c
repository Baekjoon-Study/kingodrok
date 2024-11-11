#include <stdio.h>

int main(void){
    int n[5] = {0};
    int tmp = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &n[i]);
       tmp += n[i];
    }
    printf("%d\n", tmp/5);

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            if(n[j] > n[j+1]){
                tmp = n[j], n[j] = n[j+1], n[j+1] = tmp;
            }
        }
    }
    printf("%d", n[2]);

    return 0;
}