#define _CRT_SECURE_NO_WARNINGS 1 
//BC104 ������
//������KiKi���n��m�еķ���������ҵ������ߵ��˵�λ�ã�
//���룺��һ�а�����������n��m����ʾ���������а���n��m�С�
//��2��n+1�У�ÿ������m����������Χ-231~231-1����
//�ÿո�ָ���������n*m������
//��ʾ�����е������˵���ߣ���֤������߶�����ͬ����
//(1��x��n��10��1��y��m��10)
//�����һ�У���������������ÿո�ָ���
//��ʾ�����������ߵ������ڵ��кź��кš�
//˼·�����ֿ��Բ��棬���ж����ֵʱ��¼����
//������+1����
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr[10][10];
//	int max = 0;
//	int x = 0;
//	int y = 0;
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
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d %d", x + 1, y + 1);
//	return 0;
//}
//BC105 ��������ж�
//������KiKi�õ�������n��m�еľ�������֪�����������Ƿ���ȣ�
//(�����������Ӧ����Ԫ�ض����ʱ�����������)��
//���룺��һ�����������������ÿո�ָ�
//������������,n��m��
//�����һ�У������������������"Yes"�����У��������"No"�����С�
// 2 2
//1 2
//3 4
//1 2
//3 4
//Yes
//˼·������һ��flag��������ֱ��break�Ϳ�����
//���ͨ��flag��ֵ���ж��Ƿ����
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr1[10][10];
//    int arr2[10][10];
//    int flag = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (arr1[i][j] != arr2[i][j])
//            {
//                flag = 1;
//                break;
//            }
//        }
//    }
//    if (flag == 0)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    return 0;
//}
//BC106 �����Ǿ����ж�
//�ж��Ƿ�Ϊ�����Ǿ���
//���Խ��߼��Ϸ�����Ϊ0
//�Խ����·�Ϊ0
//˼·���۲��±귢�ֶԽ����·��Ķ��Ǻ��������������
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[10][10];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i > j)//������>������
//			{
//				if (arr[i][j] != 0)//��Ϊ0
//				{
//					printf("NO\n");
//					return 0;//��������ѭ��
//				}
//			}
//		}
//	}
//	if (i == n)//��������������
//		printf("YES\n");
//	return 0;
//}
//BC108 ���󽻻�
//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    for (int i = 0; i < n; i++)//��
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    scanf("%d", &k);
//    char t = 0;
//    int a = 0;
//    int b = 0;
//    for (int i = 0; i < k; i++)//��
//    {
//        scanf(" %c %d %d", &t, &a, &b);
//        if (t == 'r')
//        {
//            for (int j = 0; j < m; j++)//ȡ��������
//            {
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//        else if (t == 'c')
//        {
//            for (int j = 0; j < n; j++)//ȡ��������
//            {
//                int tmp = arr[j][a - 1];
//                arr[j][a - 1] = arr[j][b - 1];
//                arr[j][b - 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}