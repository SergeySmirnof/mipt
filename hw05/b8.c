#include<stdio.h>
int main() {
    int a,sum;
    scanf("%d",&a);
    while (a>0)
    {
        int b=a%10;
       
        
            if (b==9)
            {
                sum++;
            }
            
      
        a/=10;
    }
if (sum==1)
{
    printf("YES");      
}
else   {
    printf("NO");
}
    
    
}