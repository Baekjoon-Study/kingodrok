#include <stdio.h>

int main(void){
    int n, solve;
    scanf("%d", &n);
    int sum = 0;
    int score = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &solve);
        solve == 1 ? (sum += solve) : (sum = 0);
        score += sum;
    }
    printf("%d", score);



    return 0;
}