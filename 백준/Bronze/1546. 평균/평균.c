#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    double score[1000] = {0};
    double max = 0.0;
    double average = 0.0;

    for(int i = 0; i < n; i++){
        scanf("%lf", &score[i]);
        if(score[i] > max){
            max = score[i];
        }
    }

    for(int i = 0; i < n; i++){
        average += (score[i] / max) * 100;
    }

    printf("%.2lf", average / n);

    return 0;
}