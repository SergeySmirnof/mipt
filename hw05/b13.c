#include<stdio.h>
int main() {
    int a,chet=0,nechet=0;
    scanf("%d",&a);
    while (a>0)
    {
        int b=a%10;
        
        if (b%2==0)
        {
            chet++;
        }
        else {
            nechet++;
        }
    


        a/=10;
    }
    printf("%d %d",chet,nechet);
    
}