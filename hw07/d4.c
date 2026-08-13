#include<stdio.h>
void print_num(int num) {
    int b;
    if(num>0) {
        b=num%10;
        print_num(num/10);
        printf("%d ", b);
    }

}

int main() {
    int n;
    scanf("%d", &n);
    if(n==0) {
        printf("0");
    } else {
        print_num(n);
    }   
    return 0;
}
