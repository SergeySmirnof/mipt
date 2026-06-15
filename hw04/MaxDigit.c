#include<stdio.h>

int main() {
    int x,a,b,c,max;
    scanf("%d",&x);
    a=x/100;
    b=(x/10)%10;
    c=x%10;
    max=(a>=b?a:b);
    max=(max>=c?max:c);
    printf("%d",max);
}