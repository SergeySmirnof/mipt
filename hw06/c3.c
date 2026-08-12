#include<stdio.h>

int middle(int,int);

int main() {
    int d,f,n;
    scanf("%d%d",&d,&f);
    n=middle(d,f);
    printf("%d",n);

}

int middle(int a, int b) {
    int c;
    c = (a+b)/2;
    return c;
}