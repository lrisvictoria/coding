#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
����һ��ֻ����Сд��ĸ���ַ�����Ȼ��������ַ�����ת����ַ��������ַ������Ȳ�����1000��

����������
����һ�У�Ϊһ��ֻ����Сд��ĸ���ַ�����

���������
������ַ�����ת����ַ�����

ʾ��1
���룺
abcd
�����
dcba
*/

//�������ˣ��Ͳ�д������

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

//�ݹ�
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