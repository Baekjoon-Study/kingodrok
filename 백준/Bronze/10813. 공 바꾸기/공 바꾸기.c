#include <stdio.h>

int main(void){
    int ball[100] = {0};
    int n, m, tmp = 0;
    int i, j;
    scanf("%d %d", &n, &m);
    for(int a = 0; a < n; a++){
        ball[a] = a+1;
    }

    for(int a = 0; a < m; a++){
        scanf("%d %d", &i, &j);
        tmp = ball[i-1], ball[i-1] = ball[j-1], ball[j-1] = tmp;
    }

    for(int a = 0; a < n; a++){
        printf("%d ", ball[a]);
    }
    return 0;
}