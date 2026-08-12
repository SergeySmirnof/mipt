#include <stdio.h>

int main() {
    int c,sum=0;
    scanf("%d",&c);
    for(int i=1;i<=c;i++)
    {
        sum+=i;
    }
    printf("%d",sum);

    return 0;
}