#define _CRT_SECURE_NO_WARNINGS 1 
//����
//��һ�����ӣ��ӳ������3������ÿ���¶���һֻ���ӣ�С���ӳ����������º�ÿ��������һֻ���ӡ�
//���ӣ�����һֻ���ӵ�3���³�������ô����5���¿�ʼ��ÿ������һֻ���ӡ�
//һ�µ�ʱ����һֻ���ӣ��������Ӷ��������ʵ�n���µ���������Ϊ���٣�
//���ݷ�Χ���������� 1 \le n \le 31 \1��n��31
//����������
//����һ��int��������ʾ��n����
//
//���������
//�����Ӧ����������
//
//ʾ��1
//���룺
//3
//�����
//2

#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int rabbit1 = 1;
    int rabbit2 = 1;
    int rabbit3 = rabbit1 + rabbit2;
    while (n > 2)
    {
        rabbit3 = rabbit1 + rabbit2;
        rabbit1 = rabbit2;
        rabbit2 = rabbit3;
        n--;
    }
    printf("%d", rabbit3);
    return 0;
}