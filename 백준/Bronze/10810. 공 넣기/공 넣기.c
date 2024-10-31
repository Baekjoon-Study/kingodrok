#include <stdio.h>

int main(void){
    int basket[100] = {0};
    int n, m;
    int i, j, k;

    scanf("%d %d", &n, &m);

    for(int a = 0; a < m; a++){
        scanf("%d %d %d", &i, &j, &k);
        for(int b = i-1; b <= j-1; b++){
            basket[b] = k;
        }
    }
    
    for(int a = 0; a < n; a++){
        printf("%d ", basket[a]);
    }

    return 0;
}