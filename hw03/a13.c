#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d",&a);
    b=a/100*((a/10)%10)*(a%10);
    printf("%d",b);
}