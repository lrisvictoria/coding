 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
//	int arr[10][10];
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int num = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr[i][j] > 0)
//			{
//				num += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", num);
//}
//���������飬ֱ����������
//int main()
//{
//	int num = 0;
//	int n = 0;
//	int m = 0;
//	int sum = 0;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &num);
//			if (num > 0)
//			{
//				sum += num;
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//������������
//int main() {
//    int n;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d ", &arr[i]);
//    }
//    int m;
//    scanf("%d", &m);
//    int j = 0;
//    for (j = n - 1; j >= 0; j--) //�ҵ�Ҫ����Ԫ��λ��
//    {
//        if (arr[j] > m) {
//            arr[j + 1] = arr[j];//�Ѳ���λ��֮������������ƶ�һλ
//        }
//        else {
//            arr[j + 1] = m;
//            break;
//        }
//    }
//    if (j < 0)
//        arr[0] = m;
//    for (int i = 0; i < n + 1; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//��һ����λ�����������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}
//��Сдת��(�������룩
//���� - getchar() - ��ȡһ���ַ������һ���ַ�
//     - putchar() - ��ӡ/���һ��
//int main()
//{
//	int ch = 0;
//	//EOF - end of file - �ļ�������־ - ͨ����Ϊ�ļ���ĩβ��
//	while ((ch = getchar())!=EOF)//�� �� Aʱ���û��س���ͬʱ���������һ��\n
//	{
//		//putchar(ch + 32);//a - 97 / A - 65
//		//printf("\n");//����
//		printf("%c\n", ch + 32);//һ���㶨
//		getchar();//��\n���ߣ���ʹ��
//	}
//	return 0;
//}

//ʮ�������� ABCDEFת��Ϊʮ��������
//int main()
//{
//	printf("%15d", 0xABCDEF);
//	return 0;
//}
//�������У� ��һ��Ϊ��Hello world!�� 
//�ڶ���Ϊprintf(��Hello world!��)���ú�ķ���ֵ
//1)
//int main()
//{
//    int ret = printf("Hello world!");
//    printf("\n");
//    printf("%d\n", ret);
//    return 0;
//}
//2)
//int main()
//{
//    printf("\n%d\n", printf("Hello world!"));//���ӡֵ�ȵ���printf����
// �õ�ֵΪ12���ٻ��н��д�ӡ12
//    return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//С�����ڴ��п��ܲ��ܾ�ȷ���棬�������ԭ����ͼ��������float����
//��Ϊdouble���;��ȹ���
//int main()
//{
//    int num = 0;
//    double c_score = 0.0;
//    double m_score = 0.0;
//    double e_score = 0.0;
//    scanf("%d;%lf,%lf,%lf", &num, &c_score, &m_score, &e_score);
//    printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf.",
//        num, c_score, m_score, e_score);
//    return 0;
//}
//������ַ�����ĸ��YES�����ǣ�NO��
//#include<stdio.h>
//int main()
//{
//    int ch = getchar();
//    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		//�жϲ����
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();//����\n
//	}
//}
//
//isalpha - ��ר�������ж�һ���ַ��ǲ�����ĸ��
//����ĸ���ط�0��ֵ
//������ĸ����0
#include<ctype.h>//ͷ�ļ�
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();
//	}
//}
//int main()
//{
//	int arr1[20];
//	int arr2[20];
//	int n,m;
//	scanf("%d", &n);
//	scanf("%d", &m);
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				sum += arr1[i];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//void test()
//{
//	static int a = 3;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//}
//
//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}

#include<stdio.h>
//int main()
//{
//    int score = 0;
//    
//    int sum = 0;
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%d", &score);
//        sum += score;
//    }
//    printf("%.1f", sum/5.0);
//    return 0;
//}