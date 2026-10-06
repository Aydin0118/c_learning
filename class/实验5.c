#include <stdio.h>
#include <stdlib.h>


int fib(int n){
    int *a;
    int i;
    a=malloc(n*sizeof(int));
    
    for(i=1;i<3;i++)
    {
        *(a+i)=0+i;


    }
    for(i=3;i<n;i++){
        *(a+i)=a[i-1]+a[i-2];
    }
    *a=1;
    printf("fibonacci结果为：%d\n",a[n-1]);
}
int main(){
    system("chcp 65001");
    int n=-1;
    while(n<=0){
        printf("请输入一个数：");
        scanf("%d",&n);
        if(n<=0){
            printf("重新输入\n");
        }
       
        
    }
    fib(n);
    
        
   
    
    return 0;
}