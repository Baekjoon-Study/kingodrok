#include <stdio.h>

int main(void){
    int n;
    int list[1000] = {0};
    int min;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &list[i]);
    }

    min = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(list[j] > list[j+1]){
                min = list[j], list[j] = list[j+1], list[j+1] = min;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d\n", list[i]);
    }

    return 0;
}