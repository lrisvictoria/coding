#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//BC102 ���ո�ֱ��������ͼ��
//��������
//        *
//      * *
//    * * *
//  * * * * 
//* * * * *
//˼·��
//��������һ����ά���飬һ���ִ�ӡ�ո�һ���ִ�ӡ*
//�������ص�i+j<n-1����������ʼ��С������ֵ-1
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//					printf("  ");
//				else
//					printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//BC106 K��ͼ��
//2
//* * * 
//* *  
//*    
//* *  
//* * *
//˼·����Ϊ������������n�к���n+1��
//ע��*�����пո�
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n + 1 - i; j++)
//            {
//                printf("* ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("  ");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < n + 1; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            for (int j = 0; j < n + 1 - i; j++)
//            {
//                printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC107 ����ͼ��
//2
//    *
//  **
//***
//  **
//    *
//˼·����Ϊ������������n��n+1
//*���޿ո񣬰��տո��*�����ִ���
//int main()
//{
//	int n;
//	while (scanf("%d", &n) == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n - i; j++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n + 1; i++)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j < n + 1 - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//BC108 ��б����ͼ��
//4
//*
// *
//  *
//   *
//˼·1:�ո��*�����֣�����*Ĭ�������һ����
//ֱ�Ӹ��ں����ӡ���м���
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//            //printf("\n");
//        }
//    }
//    return 0;
//}
//˼·2����������һ������
//ֻ���ڶԽ�����Ҳ����i==jʱ��ӡ*
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i == j)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC109 ��б����ͼ��
//4
//   *
//  *
// *
//*
//˼·һ��������̸ 
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}
//˼·2������˼��
//i+j==n-1
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC110 X��ͼ��
//5
//*   *
// * *
//  *
// * *
//*   *
//˼·��˳������������˼��,�������Խ�������
int main()
{
	int n;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0;j < n; j++)
			{
				if (i + j == n - 1 || i == j)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
//���Ͼ���ͼ��ר������ݣ���ר�����..........