#include <stdio.h>

int main(void){
    int off, on;
    long int train[4] = {0};
    int max = 0;

    max = train[0];

    for(int i = 0; i < 3; i++){
        scanf("%d %d", &off, &on);
        train[i+1] = train[i] - off + on;
        if(train[i+1] < off){
            i--;
            continue;
        }
        else{
            if(max < train[i+1]){
                max = train[i+1];
            }
        }
    }
    printf("%d\n", max);

    return 0;
}