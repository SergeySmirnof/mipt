#include <stdio.h>



void sort_even_odd(int n, int a[]) {
    int insert_pos = 0;

    for (int i = 0; i < n; i++) {

        if (a[i] % 2 == 0) {
        
            if (i != insert_pos) {
                int target = a[i];
                for (int j = i; j > insert_pos; j--) {
                    a[j] = a[j - 1];
                }
                a[insert_pos] = target;
            }
            insert_pos++; 
        }
    }
}

int main() {
    int a[20]={20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort_even_odd(20, a);
    for(int i=0; i<20; i++){
        printf("%d ", a[i]);
    }
    return 0;
}