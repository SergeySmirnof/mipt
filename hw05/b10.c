#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    while (a>0)
    {
        int b=a%10;
        int c=a/10;
        int d=c%10;

        if (b<=d)
        {
           printf("NO");
           return 0;
        }
        
        


        a/=10;
    }

    printf("YES");
    return 0;
    
}