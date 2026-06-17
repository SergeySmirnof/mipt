#include<stdio.h>
int main() {
    int a,kol=0,chet=0;
    scanf("%d",&a);
    while (a>0)
    {
        int b=a%10;
        if((b%2)==0) {
            chet++;

        }

        kol++;
        a/=10;

    }
    if (chet==kol)
    {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}