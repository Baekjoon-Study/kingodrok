#include <stdio.h>

int main(void){
    int average = 0, max_count = 0, count = 0, mode = 0;
    int list[10] = {0};

    for(int i = 0; i < 10; i++){
        scanf("%d", &list[i]);
        average += list[i];
    }

    for(int i = 0; i < 10; i++){
        count = 0;
        for(int j = 0; j < 10; j++){
            if(list[i] == list[j]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            mode = list[i];
        }
    }

    printf("%d\n%d", average / 10, mode);

    return 0;
}
