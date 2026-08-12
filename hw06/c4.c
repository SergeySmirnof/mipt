#include <stdio.h>

int func(int x){
    int a;
    if(x<-2){
        a=4;


    }
    else if (x>=2)
    {
        a=x*x +4*x +5;
    }
    else if (x>=(-2) && x<2)
    {
        a=x*x;
    }
    
    return a;

}




int main() {
     int b,c;
     int maxx=0;
    scanf("%d",&b);
    while(b!=0)
    {
       
        if (func(b)>=maxx)
        {
          maxx=func(b);
        }
       scanf("%d",&b);
    }
printf("%d",maxx);
return 0;
    
}