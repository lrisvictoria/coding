 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//#define ADD(x,y) ((x)+(y))
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = ADD(a, b);
//    printf("%d\n", c);
//    return 0;
//}
#include<stdio.h>
//����ʵ��
//int Add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = Add(a, b);
//    printf("%d\n", c);
//}
// 
// ��ת�ַ���
//#include<string.h>
//void ReverseString(char* str, int sz)
//{
//	int start = 0;
//	int end = sz - 1;
//	char tmp;
//	while (start < end)
//	{
//		char tmp = str[start];
//		str[start] = str[end];
//		str[end] = tmp;
//		start++;
//		end--;
//	}
//}
//int main()
//{
//	char str[20];
//	scanf("%s", &str);
//	int sz = strlen(str);
//	ReverseString(str, sz);
//	printf("%s\n", str);
//	return 0;
//}
//BC7 ţţ���ַ�����
//���룺#
//�����
//###
//###
//###
//#include<stdio.h>
//int main()
//{
//    char ch;
//    scanf("%c", &ch);
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            printf("%c",ch);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//BC8 ţţ���ַ�����
//  *
// ***
//*****
// ***
//  *
//һ��ʼ��Ŀ���������˺þ�
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    int n = 3;
    //��ӡ������
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    //��ӡ������
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * (n - i - 1) - 1; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
