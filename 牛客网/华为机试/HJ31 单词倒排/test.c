#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
���ַ����е����е��ʽ��е��š�

˵����

1�����ɵ��ʵ��ַ�ֻ��26����д��СдӢ����ĸ��

2���ǹ��ɵ��ʵ��ַ�����Ϊ���ʼ������

3��Ҫ���ź�ĵ��ʼ������һ���ո��ʾ�����ԭ�ַ��������ڵ��ʼ��ж�������ʱ������ת����Ҳֻ�������һ���ո�������

4��ÿ�������20����ĸ��

���ݷ�Χ���ַ����������� 1 \le n \le 10000 \1��n��10000
����������
����һ�У���ʾ�������ŵľ���

���������
������ӵĵ��Ž��

ʾ��1
���룺
I am a student
�����
student a am I
ʾ��2
���룺
$bo*y gi!r#l
�����
l r gi y bo
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
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
    char arr[10001] = { 0 };
    scanf("%[^\n]", arr);
    char* curr = arr;
    int len = strlen(arr);
    char* left = arr;
    char* right = arr + len - 1;
    reverse(left, right);
    char* start = curr; char* end = curr;
    while (*end != '\0')
    {
        while (*end != ' ' && *end != '\0' && isalpha(*end))//��0����\0���������ַ�
        {
            end++;
        }
        reverse(start, end - 1);//���õ���
        start = end + 1;
        end++;
    }
    for (int i = 0; i < len; i++)//�������
    {
        if (isalpha(arr[i]))
        {
            printf("%c", arr[i]);
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}