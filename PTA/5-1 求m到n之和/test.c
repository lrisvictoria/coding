#define _CRT_SECURE_NO_WARNINGS 1
//�����ӿڶ��壺
//int sum(int m, int n);
//����m��n���û�����Ĳ�������֤��m < n���������ص���m~n֮�����������ĺ͡�
//
//���в��Գ���������
#include <stdio.h>

    int sum(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    return 0;
}

///* ��Ĵ��뽫��Ƕ������ */
//����������
//- 5 8
//���������
//sum = 21

int sum(int m, int n)
{
    int sum = 0;
    while (m <= n)
    {
        sum += m;
        m++;
    }
    return sum;
}