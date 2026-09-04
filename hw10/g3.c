#include<stdio.h>


int main() {
    int size;
    int a;
    char c[1000];
    FILE* f;
    f=fopen("input.txt","r");
    fseek(f,0,SEEK_END);
    
    size=ftell(f);
    fseek(f,0,SEEK_SET);
    //printf("%d",size   );
    
   for (int i = 0; i < size; i++) {
        int ch = fgetc(f);
        if (ch == EOF) {
            size = i; 
            break;
        }
        c[i] = (char)ch;
    }
    fclose(f);
    while (size > 0 && (c[size - 1] == '\n' || c[size - 1] == '\r')) {
        size--;
    }
    f=fopen("output.txt","w");
    for(int i=0;i<size-1;i++) {
        if(c[i]==c[size-1]) {
            //printf("%d ",i);
            fprintf(f,"%d ",i);
        }
    }
    fclose(f);
}
