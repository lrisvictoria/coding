#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
��дһ�������������ַ����к��еĲ�ͬ�ַ��ĸ������ַ��� ASCII �뷶Χ��( 0~127 ������ 0 �� 127 )��
���б�ʾ���������������ַ�����ڷ�Χ�ڵĲ���ͳ�ơ������ͬ���ַ�ֻ����һ��
���磬�����ַ��� abaca ���ԣ��� a��b��c ���ֲ�ͬ���ַ��������� 3 ��

���ݷ�Χ�� 1 \le n \le 500 \1��n��500
����������
����һ��û�пո���ַ�����

���������
��� �����ַ��� �з�Χ��(0~127������0��127)�ַ���������

ʾ��1
���룺
abc
�����
3
ʾ��2
���룺
aaa
�����
1
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void* e1, const void* e2)
{
    return *(char*)e1 - *(char*)e2;
}
int main()
{
    char arr[501] = { 0 };
    scanf("%s", arr);
    int len = strlen(arr);
    qsort(arr, len, sizeof(char), cmp);
    int k = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] >= 0 && arr[i] <= 127)
        {
            arr[k++] = arr[i];
        }
    }
    int prep = 0;
    int count = 0;
    for (int i = 0; i < k; i++)
    {
        int curr = arr[i];
        if (curr != prep)
        {
            count++;
        }
        prep = arr[i];
    }
    printf("%d", count);
    return 0;
}