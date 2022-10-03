#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。（注：字符串末尾不以空格为结尾）
//输入描述：
//输入一行，代表要计算的字符串，非空，长度小于5000。
//
//输出描述：
//输出一个整数，表示输入字符串最后一个单词的长度。
//
//示例1
//输入：
//hello nowcoder
//复制
//输出：
//8
//复制
//说明：
//最后一个单词为nowcoder，长度为8

#include<stdio.h>
#include<string.h>
int main()
{
    char arr[5000] = { 0 };
    scanf("%[^\n]", arr);//特殊输入，读到\n为止
    int i = 0;
    int count = 0;
    for (i = strlen(arr) - 1; i >= 0; i--)
    {
        if (arr[i] != ' ')
            count++;
        else
            break;
    }
    printf("%d\n", count);
    return 0;
}