#include<stdio.h>
int main() {
    int a,cifry=0,sum=0,m,c;
    scanf("%d",&a);
    c=a;
    m=a;
    while(m>0) {
        
        m/=10;
        cifry++;
    }
    if(cifry==1 || a==0) {
        sum=a;
        printf("%d",sum);
        
    }
    else {
        sum=c%10;
        for(int i=1;i<cifry;i++) {
            int b;
            a=a/10;
            sum+=a%10;
            

    }
    printf("%d",sum);
}
return 0;
}