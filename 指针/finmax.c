#include <stdio.h>
#include <stdlib.h>
int finmax(int *arr, int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    system("chcp 65001");
    int arr[]={43,55,66,90};
    int max=finmax(arr,sizeof(arr)/sizeof(arr[0]));
    printf("最大值是%d\n",max);

    return 0;
}