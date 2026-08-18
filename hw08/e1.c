#include<stdio.h>


int main() {
    int A[5];
    scanf("%d %d %d %d %d", &A[0], &A[1], &A[2], &A[3], &A[4]); 
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += A[i];
        
    }



    printf("%.3f", (float)sum / 5);
    return 0;
}