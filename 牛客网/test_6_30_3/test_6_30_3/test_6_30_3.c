#define _CRT_SECURE_NO_WARNINGS 1 
//BC114 С�����ŵ���
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int s = 0;
//	s = (n / 12) * 4 + 2;
//	printf("%d\n", s);
//	return 0;
//}
//BC115 С������ŷ�����
//����󹫱�������С��Լ���ĺ�
//�����������long long
//˼·��շת�����
//����洢һ��n��m���ڼ�����󹫱���
//����ֵ���ı䵼�³���
//#include<stdio.h>
//int main()
//{
//    long long int n = 0;
//    long long int m = 0;
//    scanf("%lld %lld", &n, &m);
//    long long int n2 = n;
//    long long int m2 = m;
//    long long int max = 0;
//    long long int min = 0;
//    long long int tmp = 0;
//    while (tmp = n % m)
//    {
//        n = m;
//        m = tmp;
//    }
//    max = m;
//    min = (n2 * m2) / max;
//    printf("%lld\n", max + min);
//    return 0;
//}
//BC116 С���ָ�����
//���ÿλ�������0��1��
//���ĳһλ���������Ͱ������1��
//�����ż������ô�Ͱ������0��
//222222
//0
//˼·����������洢�������ԣ���Ϊ������ǽ��
//0����0��������00000
//���ԣ�����һ��˼·
//int main()
//{
//	long long int n = 0;
//	scanf("%lld", &n);
//	long long int sum = 0;
//	long long int m = 0;
//	int i = 0;
//	while (n)
//	{
//		m = n % 10;//�ȴ������һλ
//		if (m % 2 == 1)//������
//			m = 1;
//		else
//			m = 0;
//		sum += m * pow(10, i);//��
//		i++;
//		n /= 10;//����ÿһλ
//	}
//	printf("%lld\n", sum);
//	return 0;
//}
//BC117 С������̨��
//С�����Ͽ���Ҫ��n��̨�ף�ÿ�ο���ѡ����һ�׻��������ף�
//��ô��һ���ж������߷���
//n=1 1
//n=2 2
//n=3 3 1+2
//n=4 5 2+3
//쳲��������У�1 2 3 5 8 13 21....
//ʹ�õݹ��㷨
#include<stdio.h>
int Fib(int n)
{
	if (n <= 2)
		return n;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}