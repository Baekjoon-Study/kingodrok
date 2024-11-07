#include <stdio.h>
int main(void){
    int t;
    scanf("%d", &t);
    char tmp;

    for(int i = 0; i < t; i++){
        char s[100] = "";
        scanf("%s", s);

        int j = 0;
        while(s[j] != '\0'){
            tmp = s[j];
            j++;
        }
        printf("%c%c\n", s[0], tmp);
    }
    return 0;
}