#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
��һ��Ӣ������Ե���Ϊ��λ�����ŷš����硰I am a boy���������ŷź�Ϊ��boy a am I��

���е���֮����һ���ո����������г���Ӣ����ĸ�⣬���ٰ��������ַ�

���ݷ�Χ��������ַ����������� 1 \le n \le 1000 \1��n��1000

ע�Ȿ���ж�������
����������
����һ��Ӣ����䣬ÿ�������ÿո��������֤����ֻ�����ո����ĸ��

���������
�õ�����ľ���

ʾ��1
���룺
I am a boy
�����
boy a am I
ʾ��2
���룺
nowcoder
�����
nowcoder
*/

//�϶���

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
        start = end + 1;//��ʱendָ��ո�
        end++;
    }
    printf("%s", arr);
    return 0;
}