#include<stdio.h>

int main() {
    int a,s=0;
    scanf("%d",&a);
    while (a>0)
    {
        int b=a%10;
        s=s*10+b;


        a/=10;
    }
    printf("%d",s);
    return 0;
    
}