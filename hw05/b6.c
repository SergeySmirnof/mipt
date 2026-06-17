#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    while (a>0)
    {
        int b;
        int c;
        
        
        b=a%10; 
        
        a/=10;
        if (a%10==b)
        {
            printf("YES");
            return 0;
        }
        
    }
    printf("NO");
    return 0;
    
}