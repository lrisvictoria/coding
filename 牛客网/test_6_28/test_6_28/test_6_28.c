#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//������ϰ����
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n - i - 1; j++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				if (j == 0 || i == n - 1 || i == j)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//}
//BC107 ����ת��
//������KiKi��һ����������֪��ת�ú�ľ���
//������������л����õ����¾����Ϊת�þ��󣩣����̰������
//���룺��һ�а�����������n��m����ʾһ���������n��m�У��ÿո�ָ��� (1��n��10,1��m��10)
//�ÿո�ָ���������n * m��������ʾ��һ�������е�Ԫ�ء�
//��������m��n�У�Ϊ����ת�ú�Ľ����ÿ����������һ���ո�
//2 3
//1 2 3
//4 5 6
//1 4 
//2 5
//3 6
#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
//������Щ�µ�����....
//������ʽ����.......