#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001");
    int n;
    int *a;

    printf("input a number：");

    scanf("%d", &n);
    a=malloc(n*sizeof(int));

    int t;
    for (t = 0; t < n; t++)
    {
        int result = 1;              
        for (int i = 1; i <= t + 1; i++)  
        {
            result *= i;
        }
        a[t] = result;
    }
    long int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
        
    }
    printf("result is %ld", sum);

    return 0;
}