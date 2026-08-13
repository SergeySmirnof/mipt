#include <stdio.h>

void rec(int n) {

    if (n>1)
    {
       rec(n-1);
       
    }
    printf(" %d\n", n);
    return;
    
}

int main() {
    int n;
    scanf("%d", &n);
    rec(n);
    
    return 0;
}