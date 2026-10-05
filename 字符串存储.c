#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001");
    char *s="hello";//字符存储以指针的方法存储，char的长度是1，因为每个字符占用一个字节
    printf("%s\n",s);
    
    return 0;
}