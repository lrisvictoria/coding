#define _CRT_SECURE_NO_WARNINGS 1 
/*
����
������Ϊ��9��99��999��...��9999999999��10��9����Ҫ��ʹ��ѭ���ṹ��д�����������еĺͣ����ڿ���̨��������
����������
��
���������
�����еĺ�
*/
//����
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    long long sum = 9, tmp = 9;
//    for (int i = 1; i <= 9; i++)
//    {
//        tmp = 10 * tmp + 9;
//        sum += tmp;
//    }
//    cout << sum << endl;
//}

//�⺯��
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		long long tmp = pow(10, i) - 1;
		sum += tmp;
	}
	cout << sum << endl;
	return 0;
}