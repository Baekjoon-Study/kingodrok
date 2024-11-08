#include <stdio.h>

int main(void){
    int min, max;
    int n;
    scanf("%d", &n);

    int list[1000] = {0};

    for(int i = 0; i < n; i++){
        scanf("%d", &list[i]);
    }
    min = list[0], max = list[0];

    for(int i = 0; i < n; i++){
        if(min > list[i]){
            min = list[i];
        }
        if(max < list[i])
            max = list[i];
    }

    printf("%d", min*max);
    return 0;
}
