#include <stdio.h>

int main() {
    int x1,y1,x2,y2;
    float k,b,c;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    c=y2-y1;
    k=c/(x2-x1);
    b=y1-k*x1;
    printf("%.2f %.2f",k,b);
}    