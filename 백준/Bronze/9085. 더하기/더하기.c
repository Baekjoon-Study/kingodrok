#include <stdio.h>

int main(void){
    int t, n;
    int list[1000] = {0};

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        int result = 0;
        
        for(int j = 0; j < n; j++){
            scanf("%d", &list[j]);
            result += list[j];
        }
        printf("%d\n", result);

    }

    return 0;
}