#include<stdio.h>


int main() {
    int A[10];
    scanf("%d %d %d %d %d %d %d %d %d %d", &A[0], &A[1], &A[2], &A[3], &A[4], &A[5], &A[6], &A[7], &A[8], &A[9]);
    int ishmin = A[0];
    int ishmax = A[0];
    int nummin = 1, nummax = 1;
    for(int i = 1; i < 10; i++) {
      if(A[i] < ishmin) {
          ishmin = A[i];
          nummin=i+1;
        }
        if(A[i] > ishmax) {
            ishmax = A[i];
            nummax=i+1;
            }
    }



    printf("%d %d %d %d", nummax, ishmax, nummin, ishmin);
    return 0;
}