#define _CRT_SECURE_NO_WARNINGS 1 
//����
//�����ַ������һ�����ʵĳ��ȣ������Կո�������ַ�������С��5000����ע���ַ���ĩβ���Կո�Ϊ��β��
//����������
//����һ�У�����Ҫ������ַ������ǿգ�����С��5000��
//
//���������
//���һ����������ʾ�����ַ������һ�����ʵĳ��ȡ�
//
//ʾ��1
//���룺
//hello nowcoder
//����
//�����
//8
//����
//˵����
//���һ������Ϊnowcoder������Ϊ8

#include<stdio.h>
#include<string.h>
int main()
{
    char arr[5000] = { 0 };
    scanf("%[^\n]", arr);//�������룬����\nΪֹ
    int i = 0;
    int count = 0;
    for (i = strlen(arr) - 1; i >= 0; i--)
    {
        if (arr[i] != ' ')
            count++;
        else
            break;
    }
    printf("%d\n", count);
    return 0;
}