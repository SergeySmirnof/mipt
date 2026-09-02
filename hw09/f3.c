#include <stdio.h>
#include <stdio.h>

void sorter(char n[], int i) {

/*if(n==0) {
    printf("0 1\n");
    return;
}
int a[1000];
int i=0;
while(n>0){
    a[i]=n%10;
    n=n/10;
    i++;
}*/
for(int j=0;j<10;j++) {
    int b=0;
    for(int k=0;k<i;k++) {
        if(n[k]==j+'0') {
            b++;
        }

    }
    if(b>0) {
        printf("%d %d\n",j,b);
    }
}
}

int main(){
    //unsigned long long m;
        char c[1000];
        int i = 0;
        scanf("%s", c);
        while(c[i] != '\0') {
            i++;
        }
       
      
        // scanf("%llu",&m);
    sorter(c, i);
    return 0;
}
