#define _CRT_SECURE_NO_WARNINGS 1 
//����ת������дһ��������ȷ����Ҫ�ı伸��λ���ܽ�����Aת������B��
//
//ʾ��1 :
//
//���룺A = 29 ������0b11101��, B = 15������0b01111��
//�����2
//ʾ��2 :
//
//���룺A = 1��B = 2
//�����2

//plan1��
//int convertInteger(int A, int B)
//{
//	int C = A ^ B;
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((C >> i) & 1)
//			count++;
//	}
//	return count;
//}

//plan2��
//int convertInteger(int A, int B)
//{
//	int C = A ^ B;
//	int count = 0;
//	while (C)
//	{
//		C &= C - 1;//���ݻ����
//		count++;
//	}
//	return count;
//}

//plan3��
int convertInteger(int A, int B)
{
	unsigned int C = A ^ B;
	int count = 0;
	while (C)
	{
		if (C % 2)
		{
			count++;
		}
		C /= 2;
	}
	return count;
}