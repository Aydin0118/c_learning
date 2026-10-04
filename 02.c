# include <stdio.h>
# include <stdlib.h>
int main(){
    system("chcp 65001"); /* 将控制台代码页切换为 UTF-8，解决中文乱码 */
    printf("he你哈l哈哈哈你们lo");
    return 0;
}