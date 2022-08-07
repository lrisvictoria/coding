#define _CRT_SECURE_NO_WARNINGS 1 
//练习5 - 3 字符金字塔
//分数 15
//作者 张高燕
//单位 浙大城市学院
//本题要求实现函数输出n行字符金字塔。
//
//函数接口定义：
//void CharPyramid(int n, char ch);
//其中n和ch是用户传入的参数，n为[1, 9]的正整数。要求函数按照如样例所示的格式打印出n行由字符ch构成的字符金字塔。注意每个字符后有一个空格。
//
//裁判测试程序样例：
#include <stdio.h>

void CharPyramid(int n, char ch);

int main()
{
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);

    return 0;
}

/* 请在这里填写答案 */
//输入样例：
//4 G
//输出样例：
//在这里给出相应的输出。例如：
//
//   G
//  G G
// G G G
//G G G G

void CharPyramid(int n, char ch)
{
    for (int i = 0; i < n; i++)
    {
        //空格
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        //符号
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
}