#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;

    printf("加法计算结果：%d\n", sum);
    printf("减法计算结果：%d\n", difference);
    printf("乘法计算结果：%d\n", product);

    // 除法运算
    if (b != 0)
    {
        double quotient = (double)a / b;
        printf("除法计算结果：%.2f\n", quotient);
    }
    else
    {
        printf("错误：除数不能为零！\n");
    }

    return 0;
}