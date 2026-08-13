#include<stdio.h>
void recursive_des_v_dva(int n) {
  
    if(n > 0) {
        int b = n % 2;
        
        recursive_des_v_dva(n/2);
        printf("%d", b);
    }
}


int main() {
    int num;
    scanf("%d", &num);
    if(num==0) {
        printf("0");
    } else {
        recursive_des_v_dva(num);
    }
    return 0;
}