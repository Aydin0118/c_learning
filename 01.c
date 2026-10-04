#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    system("chcp 65001"); /* 将控制台代码页切换为 UTF-8，解决中文乱码 */

    int age = 18;
    double price = 19.99;
    char grade = 'A';
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    int value;

    printf("C 语言演示程序\n");
    printf("--------------------\n");
    printf("年龄: %d\n", age);
    printf("价格: %.2f\n", price);
    printf("等级: %c\n", grade);
    printf("加法测试: %d + %d = %d\n", 3, 5, add(3, 5));

    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    printf("数组元素和: %d\n", sum);
    printf("请输入一个整数: ");
    scanf("%d", &value);
    printf("你输入的是: %d\n", value);

    return 0;
}
