#include<stdio.h>

int power(int,int);


int main() {
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=power(a,b);
    printf("%d",c);

}
int power(int n,int p) {
    if(p==0) {
        n=1;
    }
    else{
    int t;
    t=n;
    while(p>1){
        
      n=t*n;
        p--;  
    }
}
     return n;
}