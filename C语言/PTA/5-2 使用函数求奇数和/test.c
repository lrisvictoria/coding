#define _CRT_SECURE_NO_WARNINGS 1 
//习题5 - 2 使用函数求奇数和
//分数 15
//作者 C课程组
//单位 浙江大学
//本题要求实现一个函数，计算N个整数中所有奇数的和，同时实现一个判断奇偶性的函数。
//
//函数接口定义：
//int even(int n);
//int OddSum(int List[], int N);
//其中函数even将根据用户传入的参数n的奇偶性返回相应值：当n为偶数时返回1，否则返回0。函数OddSum负责计算并返回传入的N个整数List[]中所有奇数的和。
//
//裁判测试程序样例：
#include <stdio.h>

#define MAXN 10

int even(int n);
int OddSum(int List[], int N);

int main()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for (i = 0; i < N; i++) {
        scanf("%d", &List[i]);
        if (even(List[i]) == 0)
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
//输入样例：
//6
//2 - 3 7 88 0 15
//输出样例：
//Sum of(-3 7 15) = 19

int even(int n)
{
    return (n % 2 ? 0 : 1);
}
int OddSum(int List[], int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (List[i] % 2)//判断是否为真，为真为奇数
            sum += List[i];
    }
    return sum;
}