#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001");
    // int a[]={0x41,0x42,0x43};  等效于自己创建内存存储指针数据
    int *a;
    a=malloc(3*sizeof(int));

    *a=0x41;
    *(a+1)=0x42;
    *(a+2)=0x43;


    printf("%x\n",a[0]);
    printf("%x\n",a[1]);
    printf("%x\n",a[2]);
    printf("%x\n",*a);
    printf("%x\n",*(a+1));
    printf("%x\n",*(a+2));

    return 0;
}