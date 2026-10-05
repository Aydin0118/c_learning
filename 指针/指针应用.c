#include <stdio.h>
#include <stdlib.h>

void fun(char *q){
    printf("%x\n",*q);
    printf("%s\n",q);
}

int main(){
    system("chcp 65001");
    char *s="你好";
    fun(s);                //现在的传递为指针地址传递，没有拷贝，指向内存地址相同
    printf("%s\n",s);
    printf("%x\n",*s);

    return 0;
}