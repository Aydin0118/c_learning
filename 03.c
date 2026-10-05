#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001");
    printf("你好，世界！\n");
    char a[]={0x41,0x42,0x43};
    char *p;
    p=&a;
    printf("%x\n",p);
    printf("%x\n",p+1);
    printf("%x\n",*p+1);

    printf("%x\n",a[0]);

    return 0;
}