#include<stdio.h>


int main() {
    int N;
    char bukvy[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int cifry[] = {2,4,6,8};
    
    char c[26];
FILE* f;
f=fopen("input.txt","r");
fscanf(f,"%d",&N);
fclose(f);
int j=0,k=0;
f=fopen("output.txt","w");
for(int i=0;i<N;i++){
   
    if(i%2==0){
        //c[i]=bukvy[j];
        printf("%c",bukvy[j]);
        fprintf(f,"%c",bukvy[j]);
        j++;
       
        
    }
    else {
       //c[i]=cifry[k];
        fprintf(f,"%d",cifry[k]);
        printf("%d",cifry[k] );
        k++;
         if(k==4){
            k=0;
    }
    }
}
fclose(f);


}