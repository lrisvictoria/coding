#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//写出一个程序，接受一个由字母、数字和空格组成的字符串，和一个字符，然后输出输入字符串中该字符的出现次数。（不区分大小写字母）
//
//数据范围： 1 \le n \le 1000 \1≤n≤1000
//输入描述：
//第一行输入一个由字母和数字以及空格组成的字符串，第二行输入一个字符。
//
//输出描述：
//输出输入字符串中含有该字符的个数。（不区分大小写字母）
//
//示例1
//输入：
//ABCabc
//A
//输出：
//2

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char arr[1001] = { 0 };
    scanf("%[^\n]", arr);//读取\n之前的所有字符
    char ch = 0;
    scanf(" %c", &ch);
    int i = 0;
    int count = 0;
    while (arr[i])//arr[i] != '\0'，除了\0停止，其他都要继续
    {
        if (tolower(arr[i]) == tolower(ch))
            count++;
        i++;//i自增，让下次访问字符数组加一个单位
    }
    printf("%d\n", count);
    return 0;
}