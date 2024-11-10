#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d", &a);

    int n, m;

    for(int i = 0; i < a; i++){
        int min = 99, max = 0;
        scanf("%d", &b);
        for(int j = 0; j < b; j++){
            scanf("%d", &n);
            if(n > max){
                max = n;
            }
            if(n < min){
                min = n;
            }
        }
        printf("%d\n", (max - min)*2);
    }    

    return 0;
}