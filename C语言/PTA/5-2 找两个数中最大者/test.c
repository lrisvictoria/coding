#define _CRT_SECURE_NO_WARNINGS 1 
//��ϰ5 - 2 ���������������
//���� 10
//���� C�γ���
//��λ �㽭��ѧ
//����Ҫ�����������a��b��������нϴ������
//
//�����ӿڶ��壺
//int max(int a, int b);
//����a��b���û�����Ĳ������������ص��������нϴ������
//
//���в��Գ���������
#include <stdio.h>

int max(int a, int b);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("max = %d\n", max(a, b));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
//����������
//- 5 8
//���������
//max = 8

int max(int a, int b)
{
    return (a > b ? a : b);//һ���������
}