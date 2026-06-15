#include<stdio.h>
int main(){
    int a,b,c,d,e,max1,max2,max;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    max1=(a>b?a:b);
    max2=(c>d?c:d);
    max=(max1>max2?max1:max2);
    max=(max>e?max:e);
    printf("%d",max);
    return 0;

}