#include<stdio.h>

int main() {
    int a,b,c,d,e,min1,min2,min,max1,max2,max,sum;
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    min1=(a<b?a:b);
    min2=(c<d?c:d);
    min=(min1<min2?min1:min2);
    min=(min<e?min:e);
    max1=(a>b?a:b);
    max2=(c>d?c:d);
    max=(max1>max2?max1:max2);
    max=(max>e?max:e);
    sum=max+min;

    printf("%d",sum);

}