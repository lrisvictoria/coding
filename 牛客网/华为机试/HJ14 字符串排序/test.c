#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
���� n ���ַ�������� n ���ַ��������ֵ������С�

���ݷ�Χ�� 1 \le n \le 1000 \1��n��1000  ���ַ����������� 1 \le len \le 100 \1��len��100
����������
�����һ��Ϊһ��������n(1��n��1000),����n��Ϊn���ַ���(�ַ������ȡ�100),�ַ�����ֻ���д�Сд��ĸ��
���������
�������n�У�������Ϊ�����ֵ������е��ַ�����
ʾ��1
���룺
9
cap
to
cat
card
two
too
up
boat
boot
�����
boat
boot
cap
card
cat
to
too
two
up
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void* e1, const void* e2)
{
    return strcmp((char*)e1, (char*)e2);
}
int main()
{
    int n = 0, k = 0;
    scanf("%d", &n);
    char arr[n][101];
    while (~scanf("%s", arr[k++]));//��ȡ�ַ������ַ�������
    qsort(arr, n, sizeof(arr[0]), cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}