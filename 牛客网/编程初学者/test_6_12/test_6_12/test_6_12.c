 #define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
//ð������
//void Bubble_sort(int arr[], int sz)
//{
//	//����
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//BC10 ʵ����������
//���룺17.89
//�����18
//˼·�����ø����;��ȶ�ʧ��ԭ��
//���С��������С��0.5��ȡ������������
//���С��������ִ���0.5��ȡ������Ϊ+0.5�������
//int main()
//{
//	double num;
//	scanf("%lf", &num);
//	int a;
//	if (num >= 0)
//	{
//		int a = num + 0.5;
//		printf("%d\n", a);
//	}
//	else
//	{
//		int a = num - 0.5;
//		printf("%d\n", a);
//	}
//	return 0;
//}
//BC27 �����ĸ�λ
//���룺102
//�����2
//˼·ģ10�Ϳ�����
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d\n", a % 10);
//	return 0;
//}
//BC28 ������ʮλ
//���룺123
//�����2
//˼·����������1λ����û��ʮλ�����0
//�������λ����ֱ��������λ��
//ֱ��/10%10����
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d\n", (a / 10) % 10);
//	return 0;
//}
//BC29 ��ѧ��
//�������������Ƴټ���
//�����ǰ������
//1 2 -> 3
//4 5 -> 2
//#include<stdio.h>
//int main()
//{
//    int x, n;
//    scanf("%d %d", &x, &n);
//    int day = x + n;
//    while (day>7)//ֱ��%7��������
//    {
//        day %= 7;
//    }
//    if (day == 0)
//    {
//        printf("7");
//    }
//    else
//    {
//        printf("%d\n", day);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}
//int main()
//{
//	char ch = '1';
//	int a = 12.3;//�ĸ��ֽ�
//	float c = 3.14;
//	c = 4.13;
//	//0000 0000 0000 0000 0000 0000 0000 0000
//}
//int main()
//{
//	
//	//20;
//	//printf("10");
//	//int a = 3;
//	//int b = 4;
//	////scanf("%d %d", &a, &b);
//	//int sum = a + b;
//	//printf("%d\n%d", sum,sum);
//	//return 0;
//	/*char ch = 'a';
//	printf("%d", ch);*/
//	//float a = 3.14;
//	//printf("%.2f", a);
//	char str[] = "abcd";
//	printf("%s", str);
//}
//int main()
//{
//	//int a;
//	//printf("���ú�ѧϰ��->0/1\n");
//	//scanf("%d", &a);
//	//if (a == 1)
//	//{
//	//	printf("�ҹ���");
//	//}
//	//if (a == 0)
//	//{
//	//	printf("�ֵ�");
//	//}
//	//return 0;
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//		printf("1234");
//	case 2:
//		printf("5678");
//	}
//	return 0;
//}
//int Add(int x)
//{
//	return 5 + x;
//}
//int main()
//{
//	int i = 3;
//	printf("%d", Add(3));
//}
//\0
//char str[] = "abdc"
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int* p = arr;
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%c%c%c\n", ch, ch, ch);
//	printf("%c %c\n", ch, ch);
//	printf("%c%c%c\n", ch, ch, ch);
//}
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    int M = 0;
//    int sum = 0;
//    scanf("%d %d", &N, &M);
//    int arr[10][10];
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < M; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > 0)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}
int main()
{
	char arr[5] = "1234";
	printf("%s", arr);
}