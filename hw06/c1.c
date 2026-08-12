#include<stdio.h>
int mod(int);

int main() {
    int dig,m;
    scanf("%d",&dig);
    m=mod(dig);
    printf("%d",m);

}
int mod(int a) {
    int b;
    if(a<0) {
     b=(-1)*a;}
     else {
        b=a;
     }
    return b;
}