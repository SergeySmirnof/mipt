#include <stdio.h>
int main(void) {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    float d=((float)a+b+c)/3;
    printf("%.2f",d);
}