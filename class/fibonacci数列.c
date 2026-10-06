#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001");
   
    int *a;
    int  i,t;
    printf("查找项：");
    scanf("%d",&t);
    a=malloc(t*sizeof(int));
    
    for(i=1;i<3;i++)
    {
        *(a+i)=0+i;


    }
    for(i=3;i<t;i++){
        *(a+i)=a[i-1]+a[i-2];
    }
    *a=1;
   

    printf("%d\n",a[t-1]);

    // printf("%d\n",a[0]);
    // printf("%d\n",a[1]);
    // printf("%d\n",a[2]);
    // printf("%d\n",a[3]);
    // printf("%d\n",a[4]);
    // printf("%d\n",a[5]);
    // printf("%d\n",a[6]);
    // printf("%d\n",a[7]);
    // printf("%d\n",a[8]);
    // printf("%d\n",a[9]);


    return 0;
}