#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//**************************��������Ŀ�Լ�ͼ��ר��ڶ����֣�*******************************

//BC55 �򵥼�����
//����һ���ַ�����������1+�����+������2 
//�����кϷ��������������+��-��*��/����
//�����������������ž��Ϸ��������һ�����ʽ��
//������1�����������2 = ��������
//����С����������4λ�����ͷ���֮��û�пո�
//��������������Ų������ڣ� + �� - �� * �� / ����Χ�ڣ�
//�����Invalid operation!�����������Ϊ�������㣬���� / ��ʱ��
//���������2����0.0���������Wrong!Division by zero!����
//int main()
//{
//    double a, b;
//    char op;
//    while (~scanf("%lf%c%lf", &a, &op, &b))
//    {
//        switch (op)
//        {
//        case '+':
//            printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
//            break;
//        case '-':
//            printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
//            break;
//        case '*':
//            printf("%.4lf*%.4lf=%.4lf\n", a, b, a * b);
//            break;
//        case '/':
//            if (b == 0.0)
//                printf("Wrong!Division by zero!\n");
//            else
//                printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
//            break;
//        default:
//            printf("Invalid operation!\n");
//            break;
//        }
//    }
//    return 0;
//}
//BC103 ������ͼ��
//��������
//4
//   * 
//  * *
// * * *
//* * * *
//˼·����Ϊ�ո��*������
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = n - i-1; j > 0; j--)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC104 ��ת������ͼ��
//4
//* * * * 
// * * * 
//  * * 
//   *
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            for (int j = n - i; j > 0; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC105 ����ͼ��
//2
//  *
// * * 
//* * * 
// * * 
//  * 
//˼·����Ϊ���������֣������������ڷ�������
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n + 1; i++)
//        {
//            for (int j = n - i; j > 0; j--)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf(" ");
//            }
//            for (int j = n - i; j > 0; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC12 �ַ�ʥ����
//����߳�Ϊ5���ַ�ʥ����
//1
//    *
//   * *
//  * * * 
// * * * *
//* * * * *
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5 - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}