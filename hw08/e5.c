#include<stdio.h>

int main() {
    int A[10];
    scanf("%d %d %d %d %d %d %d %d %d %d", &A[0], &A[1], &A[2], &A[3], &A[4], &A[5], &A[6], &A[7], &A[8], &A[9]);
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        if(A[i]>0) {
            sum += A[i];
        }

    }

    printf("%d", sum);
    
}