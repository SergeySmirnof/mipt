#include<stdio.h>
int main() {
    int a,b;
    int sum=0;
    scanf("%d%d",&a,&b);
    if(a>100 || b>100) {
        return 0;

    }
    while(a<=b) {
        
        sum+=a*a;
        a++;
    }
    printf("%d",sum);
}