#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>100 || b>100) {
        return 0;
    }
    while(a<=b) {
        printf("%d ",a*a);
        a++;
    }
}