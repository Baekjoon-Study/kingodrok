#include <stdio.h>

int main(void){
    int basket[100] = {0};
    int n, m;
    int i, j;
    int reverse;
    
    scanf("%d %d", &n, &m);
    for(int a = 0; a < n; a++){
        basket[a] = a+1;
    }

    for(int a = 0; a < m; a++){
        scanf("%d %d", &i, &j);
        reverse = 0;
        while(1){
            reverse = basket[j-1];
            basket[j-1] = basket[i-1];
            basket[i-1] = reverse;
            i++, j--;
            if(i >= j){
                break;
            }
        }

    }

    for(int a = 0; a < n; a++){
        printf("%d ", basket[a]);
        }
    return 0;
}