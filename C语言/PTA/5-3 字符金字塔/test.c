#define _CRT_SECURE_NO_WARNINGS 1 
//��ϰ5 - 3 �ַ�������
//���� 15
//���� �Ÿ���
//��λ ������ѧԺ
//����Ҫ��ʵ�ֺ������n���ַ���������
//
//�����ӿڶ��壺
//void CharPyramid(int n, char ch);
//����n��ch���û�����Ĳ�����nΪ[1, 9]����������Ҫ����������������ʾ�ĸ�ʽ��ӡ��n�����ַ�ch���ɵ��ַ���������ע��ÿ���ַ�����һ���ո�
//
//���в��Գ���������
#include <stdio.h>

void CharPyramid(int n, char ch);

int main()
{
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);

    return 0;
}

/* ����������д�� */
//����������
//4 G
//���������
//�����������Ӧ����������磺
//
//   G
//  G G
// G G G
//G G G G

void CharPyramid(int n, char ch)
{
    for (int i = 0; i < n; i++)
    {
        //�ո�
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        //����
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
}