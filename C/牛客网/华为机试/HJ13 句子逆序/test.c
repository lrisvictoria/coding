#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”

所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符

数据范围：输入的字符串长度满足 1 \le n \le 1000 \1≤n≤1000

注意本题有多组输入
输入描述：
输入一个英文语句，每个单词用空格隔开。保证输入只包含空格和字母。

输出描述：
得到逆序的句子

示例1
输入：
I am a boy
输出：
boy a am I
示例2
输入：
nowcoder
输出：
nowcoder
*/

//老对手

#include<stdio.h>
#include<string.h>
void reverse(char* left, char* right)
{
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}
int main()
{
    char arr[1001] = { 0 };
    scanf("%[^\n]", arr);
    char* left = arr;
    char* right = arr + strlen(arr) - 1;
    reverse(left, right);
    char* start = arr;
    char* end = arr;
    while (*end)
    {
        while (*end != ' ' && *end != '\0')
        {
            end++;
        }
        reverse(start, end - 1);
        start = end + 1;//此时end指向空格
        end++;
    }
    printf("%s", arr);
    return 0;
}