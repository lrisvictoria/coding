#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
����һ�� int �͵���������������� int ���������ڴ��д洢ʱ 1 �ĸ�����

���ݷ�Χ����֤�� 32 λ�������ַ�Χ��
����������
 ����һ��������int���ͣ�

���������
 �����ת����2���ƺ����1�ĸ���

ʾ��1
���룺
5
�����
2
ʾ��2
���룺
0
�����
0
*/

#include<stdio.h>
int main()
{
    int n = 0, count = 0;
    scanf("%d", &n);
    while (n)
    {
        n &= n - 1;
        count++;
    }
    printf("%d\n", count);
    return 0;
}