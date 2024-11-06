#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a=(a%100%10*100)+(a%100/10*10)+a/100,b=(b%100%10*100)+(b%100/10*10)+b/100;
    a>b?printf("%d",a):printf("%d",b);}