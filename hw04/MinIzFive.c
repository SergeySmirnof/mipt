#include<stdio.h>

int main() {
    int a,b,c,d,e,min1,min2,min;
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    min1=(a<b?a:b);
    min2=(c<d?c:d);
    min=(min1<min2?min1:min2);
    min=(min<e?min:e);
    printf("%d",min);

}