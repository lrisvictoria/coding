#define _CRT_SECURE_NO_WARNINGS 1 
//����
//Lily�Ͽ�ʱʹ����ĸ����ͼƬ��С������ѧϰӢ�ﵥ�ʣ�ÿ�ζ���Ҫ����ЩͼƬ���մ�С��ASCII��ֵ��С���������պá����Ҹ�Lily��æ��ͨ����������
//Lilyʹ�õ�ͼƬʹ���ַ�"A"��"Z"��"a"��"z"��"0"��"9"��ʾ��
//
//���ݷ�Χ��ÿ��������ַ����������� 1 \le n \le 1000 \1��n��1000
//
//����������
//һ�У�һ���ַ������ַ����е�ÿ���ַ���ʾһ��Lilyʹ�õ�ͼƬ��
//
//���������
//Lily������ͼƬ���մ�С�����˳�����
//
//ʾ��1
//���룺
//Ihave1nose2hands10fingers
//�����
//0112Iaadeeefghhinnnorsssv

//˵����Ҳ�����ɣ������ѧ�˿��ţ�����������ַ�������
//�ǳ��򵥣�һ�����Ÿ㶨���ҾͲ���ͼ�ˣ�������

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void* e1, const void* e2)
{
    return *(char*)e1 - *(char*)e2;
}
int main()
{
    char arr[1001] = { 0 };
    scanf("%s", arr);
    int len = strlen(arr);
    qsort(arr, len, sizeof(arr[0]), cmp);
    printf("%s", arr);
    return 0;
}