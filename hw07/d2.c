#include <stdio.h>

 static int sum = 0;
void rec(int n) {
   

    if (n>1)
    {
       rec(n-1);
       
    }

    sum += n;
    //printf(" %d\n", n);
    return;
    
}

int main() {
    int n;
    scanf("%d", &n);
    rec(n);
    printf("%d\n", sum);
    
    return 0;
}