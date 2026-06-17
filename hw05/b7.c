#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    while (a>0)
    {
        
        int b,c;
        b=a%10;
        c=a/10;

        while (c>0)
        {
            int d;
            d=c%10;
            if (b==d)
            {
                printf("YES");
                return 0;
            }
            c/=10;
        }
        
       
         a/=10;

    }
    printf("NO");
    return 0;

}