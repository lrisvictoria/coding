#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ð��������Ż�
//void Bubblesort(int arr[], int sz)
//{
//	int flag = 1;//�����Ѿ�����
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				int flag = 0;//�����������
//			}
//			if (flag == 1)
//			{
//				break;//�������ֱ�ӽ���ѭ��
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//BC38 ����ˮ�ɻ�
//����ˮ�ɻ��� - Lily Number��
//����������֣����м��ֳ��������֣�
//����1461 ���Բ�ֳɣ�1��461��,��14��61��,��146��1),
//������в�ֺ�ĳ˻�֮�͵�������
//����һ��Lily Number��
//���磺
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//��� 5λ���е����� Lily Number��
//˼·���ǿ�һ�����֣�Ҳ���ǰ������/�������λ*%���λ
//���εݼ��Ϳ����ˣ�
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	for (int i = 10000; i < 100000; i++)
//	{
//		if ((i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10)==i)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//���������������ӷ��
//������һ�¸߼����˼·
//(�вο��ɷ�.....)
int main()
{
	int num;
	for (int num = 10000; num < 100000; num++)
	{
		int sum = 0;//�ֲ������ǵó�ʼ��
		for (int i = 10; i <= 100000; i *= 10)
		{
			sum += (num / i) * (num % i);//�����ҷ��˺ü��δ���
		}
		if (sum == num)
		{
			printf("%d ", num);
		}
	}
}