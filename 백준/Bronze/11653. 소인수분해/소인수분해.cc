#include <stdio.h>
int main(){int n, i = 2;scanf("%d", &n);while(n>1){n%i==0?n/=i,printf("%d ",i),i=2:i++;}}