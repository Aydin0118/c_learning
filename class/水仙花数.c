#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001");
    int i,n;

    n=0;
    for(i=100;i<1000;i++){
        int a=i/100;
        int b=(i/10)%10;
        int c=i%10;
        if(i==a*a*a+b*b*b+c*c*c){
            printf("%d ",i);
            n++;
            if(n%2==0){
                printf("\n");
            }
        }
    }

    return 0;
}