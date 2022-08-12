#define _CRT_SECURE_NO_WARNINGS 1 
//整数转换。编写一个函数，确定需要改变几个位才能将整数A转成整数B。
//
//示例1 :
//
//输入：A = 29 （或者0b11101）, B = 15（或者0b01111）
//输出：2
//示例2 :
//
//输入：A = 1，B = 2
//输出：2

//plan1：
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

//plan2：
//int convertInteger(int A, int B)
//{
//	int C = A ^ B;
//	int count = 0;
//	while (C)
//	{
//		C &= C - 1;//数据会溢出
//		count++;
//	}
//	return count;
//}

//plan3：
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