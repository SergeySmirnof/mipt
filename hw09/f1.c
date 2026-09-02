#include<stdio.h>

void sort_array(int size, int a[]){
    int i, j, temp;
    for(i=0; i<size-1;i++){
        for(j=0; j<size-1-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    /*for(i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");*/
}

int main(){
    int a[] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};
    int size = sizeof(a)/sizeof(a[0]);

    sort_array(size, a);

}