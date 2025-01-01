#include <stdio.h>

int main(void){
    int t;
    int cent[1000] = {0};
    int q, d, n, p;

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &cent[i]);
    }

    for(int i = 0; i < t; i++){
        int r = cent[i] % 25;
        q = cent[i] / 25;
        d = r / 10;
        r = r % 10;
        n = r / 5;
        p = r % 5 / 1;

        printf("%d %d %d %d\n", q, d, n, p);
    }

    return 0;
}