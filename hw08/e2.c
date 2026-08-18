#include<stdio.h>


int main() {
    int A[5];
    scanf("%d %d %d %d %d", &A[0], &A[1], &A[2], &A[3], &A[4]); 
    int sum = A[0];
    for(int i = 1; i < 5; i++) {
      if(A[i] < sum) {
          sum = A[i];
        }
    }



    printf("%d", sum );
    return 0;
}