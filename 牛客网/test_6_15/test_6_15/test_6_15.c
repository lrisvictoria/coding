 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
#include<math.h>
//int isSuccess(char str[])
//{
//	if (strlen(str) != 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char str[100];
//	scanf("%s", &str);
//	int ret =isSuccess(str);
//	if (ret == 1)
//	{
//		printf("you will be succseeful!");
//	}
//	else
//	{
//		printf("oops!");
//	}
//}

//BC27 ������������
//����뾶
//������
// ��ͨд��
//V = 4/3*��r3 �� = 3.1415926
//int main()
//{
//	float r;
//	scanf("%f", &r);
//	double v;
//	v = (4 * 3.1415926 * r * r * r) / 3;
//	printf("%.3lf", v);
//	return 0;
//}
//�ڶ���д����pow����
//�궨�� ��
//
//#define �� 3.1415926
//int main()
//{
//	float r;
//	scanf("%f", &r);
//	double v;
//	v = (4.000 * �� * pow(r, 3)) / 3.000;
//	printf("%.3lf", v);
//	return 0;
//}

//BC30 KiKi������
//BoBo����һ�����̣�������n��δ�򿪵����̣�KiKiϲ�������̣�
//��һʱ�䷢�������̡�KiKiÿh�����ܺȹ�һ�����̣�
//����KiKi�ںȹ�һ������֮ǰ�������һ����
//��ô����m���Ӻ��ж��ٺ�δ�򿪵����̣�
// �������룬ÿ�������һ�У�����n��h��m����Ϊ��������
//�������ݱ�֤m <= n * h��
//���룺8 5 16
//�����4
//int main()
//{
//	int n, h, m;
//	int i;
//	while (scanf("%d %d %d", &n, &h, &m) == 3)//��������
//	{
//		//���Ǻ���
//		if (m % h == 0)
//		{
//			i = n - m / h;
//			printf("%d\n", i);
//		}
//		//����û����
//		else
//		{
//			i = n - m / h - 1;
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
int main()
{
	char a = 'abcd';
	putchar(a);
	printf("\n%d", a);
}