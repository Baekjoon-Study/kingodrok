// 최대공약수 / 최대공배수 구하기
#include <stdio.h>

int main(void)
{
    int n, m;
    int min, max, tmp = 0;

    scanf("%d %d", &n, &m);
    // 1. 양의 정수가 아닐 때
    while (m <= 0 && n <= 0){scanf("%d %d", &m, &n);}
    // 2. m < n 일 때
    if(n < m){
        tmp = m;m = n;n = tmp;}
    //최대공약수
    for(int i = 1; i <= n; i++)
        n % i == 0 && m % i == 0 ? min = i : 0;
    printf("%d\n", min);
   
    max = ( n * m )/ min;
    printf("%d", max);
    return 0;
}