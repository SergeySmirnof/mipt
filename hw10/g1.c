#include<stdio.h>



int main() {    
FILE* f=NULL;
char c[100];
f = fopen("input.txt", "r");
//fopen("C:\\Users\\User\\DomZ\\hw10\\G3\\input.txt", "r");

int ch;
int size=0;
    
    while ((ch = fgetc(f)) != EOF) {
        if (ch != '\n' && ch != '\r') {
            c[size] = (char)ch;
            size++;
        }
    }
//fseek(f,0,SEEK_END);

//int size=ftell(f);
//fseek(f,0,SEEK_SET);
//for(int i=0;i<size;i++) {
   
   //[i]=fgetc(f);  

fclose(f);
f = fopen("output.txt", "w");
    
//fopen("C:\\Users\\User\\DomZ\\hw10\\G3\\output.txt", "w");
for(int j=0;j<3;j++) {
for(int i=0;i<size;i++) {
    fputc(c[i],f);
    
}if (j < 2) {
 fprintf(f, ", ");
 
}
}
fprintf(f, " %d", size);
fclose(f);

}