#include <stdio.h>
#include <stdlib.h>
int finmax(int *arr, int size, int *coun){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    (*coun)=1;
    return max;
}
int main(){
    system("chcp 65001");
    int arr[]={43,55,66,90};
    int count;
    int max=finmax(arr,sizeof(arr)/sizeof(arr[0]), &count);
    printf("最大值是%d\n",max);
    printf("%d",count);//1
    return 0;
}