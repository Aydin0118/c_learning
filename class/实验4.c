#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001");
    int condition = 1,k=0,f=0;
    while (condition<11)
    {
        int i;
        printf("input a number: ");
        scanf("%d", &i);
        condition=condition+1;
        if (i == 0){
            printf("false 结束输入\n");
            break;
        }
        else if (i>0)
        {
            k=k+i;



            
        }
        else f=f+i;
    }
    printf("正数和=%d\n",k);
    printf("总和=%d",f+k);
    
    return 0;
}