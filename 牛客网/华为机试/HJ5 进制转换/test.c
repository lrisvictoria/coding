#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。
//
//数据范围：保证结果在 1 \le n \le 2 ^ {31} - 1 \1≤n≤2
//31
//−1
//输入描述：
//输入一个十六进制的数值字符串。
//
//输出描述：
//输出该数值的十进制字符串。不同组的测试用例用\n隔开。
//
//示例1
//输入：
//0xAA
//输出：
//170

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char arr[100] = { 0 };

    while (~scanf("%s", arr))
    {
        int ans = 0;
        int count = 0;
        for (int i = strlen(arr) - 1; i >= 2; i--)
        {
            if (arr[i] >= '0' && arr[i] <= '9')
            {
                ans += (arr[i] - 48) * (int)pow(16, count);
                count++;
            }
            else if (arr[i] >= 'A' && arr[i] <= 'Z')
            {
                ans += (arr[i] - 55) * (int)pow(16, count);
                count++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}