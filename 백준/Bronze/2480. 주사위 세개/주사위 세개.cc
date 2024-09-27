#include <stdio.h>

int main(void)
{
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a == b && b == c && c == a){printf("%d", 10000+a*1000);}    // 다 일치

    else if(a==b || b==c || c==a){                  // 하나 빼고 일치
        if(a==b){printf("%d", 1000+a*100);}
        else if(b==c){printf("%d", 1000+b*100);}
        else if(c==a){printf("%d", 1000+c*100);}
    }
    else{     
        int max = a;                                      // 다 틀림
        if(max < b){max = b;}
        if(max<c){max=c;}
        printf("%d", max*100);
    }
    
    return 0;
}