#include<stdio.h>
int main() {
    int a,max=0,min=9;
    scanf("%d",&a);
    while (a>0)
    {
        int b=a%10;
        max=max<b?b:max;
        min=min>b?b:min;


        a/=10;
    }
    printf("%d %d",min,max);
    
}