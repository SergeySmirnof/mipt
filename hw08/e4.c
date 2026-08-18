#include<stdio.h>

int main() {
    int A[10];
    scanf("%d %d %d %d %d %d %d %d %d %d", &A[0], &A[1], &A[2], &A[3], &A[4], &A[5], &A[6], &A[7], &A[8], &A[9]);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (A[i] < A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }

    }
    printf("%d", (A[8]+A[9]));
    
}