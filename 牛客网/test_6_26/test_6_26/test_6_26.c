#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//BC71 �������
//���룺��
//�����Happy New Year*2019*
//int main()
//{
//    printf("Happy New Year*2019*");
//    return 0;
//}
//BC72 ƽ�����
//���룺���������
//�����ƽ��ֵ��������λС��
//1.68 1.75 1.82 1.60 1.92
//1.75
//#include<stdio.h>
//int main()
//{
//    double h = 0.0;
//    double sum = 0.0;
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%lf", &h);
//        sum += h;
//    }
//    printf("%.2lf", sum / 5);
//    return 0;
//}
//BC73 �ҿ�Σ��
//���룺һ�У�һ��������0~30������ʾKiKi�ҵĿ�Ŀ�ۼƵ�ѧ�֡�
//�����һ�У������Ӧѧϰ�����Danger++��Danger��Good��
//14 Danger++
//1 Good
//5 Danger
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (n >= 0 && n <= 3)
//        printf("Good");
//    else if (n >= 4 && n <= 9)
//        printf("Danger");
//    else
//        printf("Danger++");
//    return 0;
//}
//BC74 HTTP״̬��
//���룺�������룬һ�У�һ��������100~600������ʾHTTP״̬��
//�������Ӧ��http״̬��
//200-OK
//202 - Accepted
//400 - Bad Request
//403 - Forbidden
//404 - Not Found
//500 - Internal Server Error
//502 - Bad Gateway
//˼·������if����switch
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        switch (n)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//    return 0;
//}
//BC76 ����Ա����
//���룺ÿһ�У�����7��������0~100��������7���ɼ����ÿո�ָ���
//�����ÿһ�У����ȥ����߷ֺ���ͷֵ�ƽ���ɼ���
//С�������2λ��ÿ��������С�
//ע���Ƕ�������
//˼·��һ��ʼ��û�����Ƕ����������ǰ���ƽ����˼·��ûͨ��
//�����γ��Ժ��һ��Ǿ�����ð�����������Ƚ��ʺ���
//#include<stdio.h>
//void Sort(int arr[], int sz)
//{
//    sz = 7;
//    for (int i = 0; i < sz - 1; i++)
//    {
//        for (int j = 0; j < sz - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[7] = { 0 };
//    int sum = 0;
//    while (~scanf("%d %d %d %d %d %d %d",
//        &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7]))
//    {
//        Sort(arr, 7);
//        for (int i = 0; i < 7; i++)
//        {
//            if (i != 0 && i != 6)
//                sum += arr[i];
//        }
//        printf("%.2lf\n", sum / 5.0);
//        sum = 0;
//        //ע�������Ҫ��0����Ϊsum��ֵ���ı��ˣ�
//        //��һ�ν���ѭ��ʱsumӦ�û��Ǵ�0��ʼ��
//    }
//    return 0;
//}
//BC77 �������в���һ����
//û�����������Ŀ���������ˣ��������ϴ����ķ�����һ�����صĴ���
//���룺��һ������һ������(0��N��50)��
//�ڶ�������N���������е������������ÿո�ָ���N��������
//������������Ҫ���в����һ��������
//���Ϊһ�У�N+1���������е�������
//5
//2 3 4 5 6
//1
//�������Ӿ����Ҵ���ĵط�
//�����������󣬲�û���ҵ�������Ԫ�ش��Ԫ��
//�Ӷ����ܽ���else���֣���ô����������������������
//2 2 3 4 5 6
//����Ҫ���ǵ�������������ǲ���...
//
//int main()
//{
//	int arr[50] = { 0 };
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num;
//	scanf("%d", &num);
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (arr[i] > num)
//		{
//			arr[i + 1] = arr[i];//����ƶ�һλ
//		}
//		else
//		{
//			arr[i+1] = num;
//			break;
//		}
//	}
//	if (arr[0] > num)
//		arr[0] = num;//Ҫ�����Ԫ��С�����е�Ԫ��
//	for (int i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//BC78 ɸѡ��������(���˸о����ѣ�
//ɸѡ������ɸѡ����n���ڵ�������
//��2~n֮������������������ڴ洢��
//��������2֮��������ܱ�2����������0��
//�ٽ�3֮��������ܱ�3����������0 ���Դ����ƣ�ֱ��nΪֹ��
//�����в�Ϊ0 ������Ϊ������
//���룺�������룬ÿ������һ����������������100����
//�����������У���һ�У����n֮�ڣ�����n�����������ÿո�ָ���
//�ڶ��У����������2֮����0 �ĸ�����ÿ��������С�
//20
//2 3 5 7 11 13 17 19
//11
//ʵ�֣�
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int arr[101];//��Ӧ�±�
//		for (int i = 2; i <= n; i++)
//		{
//			arr[i] = i;//��Ԫ��
//		}
//		for (int i = 2; i <= n; i++)
//		{
//			//i֮���Ԫ�ؽ���ȡģ����i+1��ʼ
//			for (int j = i + 1; j <= n; j++)
//			{
//				if (arr[j] % i == 0)
//					arr[j] = 0;//������0
//			}
//			int count = 0;
//			for (int i = 2; i <= n; i++)
//			{
//				if (arr[i] != 0)
//					printf("%d ", arr[i]);//��Ϊ0���
//				else
//					count++;//Ϊ0��count����
//			}
//			printf("\n%d\n", count);//���Ƹ�ʽ
//		}
//	}
//	return 0;
//}
//���������Գ���
//int main()
//{
//	int n;
//	while (scanf("%d", &n) == 1)
//	{
//		int count = 0;
//		int i = 0;
//		for (int i = 2; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 2; j < i; j++)//i-1��
//			{
//				if (i % j == 0)//�ж��Ƿ�����
//				{
//					count++;//����++��ֱ������
//					break;
//				}
//			}
//			if (j == i)//����ѭ�������޷���������ʱj��i��ȣ�Ϊ����
//				printf("%d ", i);
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}
//BC79 ͼ�����ƶ�
//��һ�а�����������m��n����ʾͼ����������������õ����ո������
//1��m��100, 1��n��100��֮��m�У�ÿ��n������0��1��
//��ʾ��һ���ڰ�ͼ���ϸ����ص����ɫ�������������õ����ո������
//֮��m�У�ÿ��n������0��1��
//��ʾ�ڶ����ڰ�ͼ���ϸ����ص����ɫ�������������õ����ո������
//���������һ��ʵ������ʾ���ƶ�(�԰ٷֱȵ���ʽ����)��
//��ȷ��С�������λ��
//3 3
//1 0 1
//0 0 1
//1 1 0
//1 1 0
//0 0 1
//0 0 1
//44.44��ע�⣩
//int main()
//{
//	int m, n;
//	int arr1[100][100];
//	int arr2[100][100];
//	scanf("%d %d", &m, &n);
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//				count++;
//		}
//	}
//	printf("%.2lf", 100.0 * count / (m * n));
//	return 0;
//}
//BC80 ��¼��֤
//���������û�����admin�����룺admin����
//�û������û��������룬�ж��Ƿ��¼�ɹ���
//����������ݣ�ÿ���������ÿո�ֿ����ַ�������һ��Ϊ�û������ڶ���Ϊ���롣
//���ÿ������������ݣ����Ϊһ�У�
//һ���ַ�������Login Success!����Login Fail!������
//˼·���ַ������бȽ��ÿ⺯��strcmp������==
#include<stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    char s3[] = "admin";
    while (~scanf("%s %s", s1, s2))
    {
        if (strcmp(s1, s3) == 0 && strcmp(s2, s3) == 0)
            printf("Login Success!\n");
        else
            printf("Login Fail!\n");
    }
    return 0;
}