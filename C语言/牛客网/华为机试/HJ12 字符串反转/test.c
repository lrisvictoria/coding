#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
接受一个只包含小写字母的字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）

输入描述：
输入一行，为一个只包含小写字母的字符串。

输出描述：
输出该字符串反转后的字符串。

示例1
输入：
abcd
输出：
dcba
*/

//老朋友了，就不写过程了

//#include<stdio.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char str[1001] = { 0 };
//    scanf("%s", str);
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    reverse(left, right);
//    printf("%s", str);
//    return 0;
//}

//递归
#include<stdio.h>
void reverse(char* str)
{
    if (*str)
    {
        reverse(str + 1);
    }
    printf("%c", *str);
}
int main()
{
    char arr[101];
    scanf("%s", arr);
    reverse(arr);
    return 0;
}