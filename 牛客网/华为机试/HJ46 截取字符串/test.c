#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
����һ���ַ�����һ������ k ����ȡ�ַ�����ǰk���ַ������

���ݷ�Χ���ַ����������� 1 \le n \le 1000 \1��n��1000  �� 1 \le k \le n \1��k��n
����������
1.�������ȡ���ַ���

2.����һ��������k�������ȡ�ĳ���

���������
��ȡ����ַ���

ʾ��1
���룺
abABCcDEF
6
�����
abABCc
ʾ��2
���룺
bdxPKBhih
6
�����
bdxPKB
*/

//����Ŀ����д�����

#include<stdio.h>
int main()
{
    char arr[1001] = { 0 };
    scanf("%[^\n]", arr);
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%c", arr[i]);//��ӡ�ַ�
    }
    return 0;
}