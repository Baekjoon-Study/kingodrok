#include <stdio.h>

int main(void){
    long long int train = 0;
    int left, board;
    int max = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d %d" ,&left, &board);
        train += board - left; max < train ? max = train : 0;
    }
    printf("%d", max);

    return 0;
}