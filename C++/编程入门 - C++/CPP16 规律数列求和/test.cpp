#define _CRT_SECURE_NO_WARNINGS 1 
/*
描述
有数列为：9，99，999，...，9999999999（10个9）。要求使用循环结构编写程序计算此数列的和，并在控制台输出结果。
输入描述：
无
输出描述：
该数列的和
*/
//迭代
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

//库函数
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