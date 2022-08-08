#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。
//1. 用返回一个整数列表来代替打印
//2. n 为正整数，0 < n <= 5
//	
//示例1
//输入：1
//返回值：
//[1, 2, 3, 4, 5, 6, 7, 8, 9]

int* printNumbers(int n, int* returnSize)
{
    int sum = 0;
    while (n)//计算输入位数对应的最大值
    {
        sum += 9 * pow(10, n - 1);
        n--;
    }
    static int arr[100000] = { 0 };
    for (int i = 0; i < sum; i++)//最大值-1即为数组的最大下标
    {
        arr[i] = i + 1;//将1-sum存入数组
    }
    *returnSize = sum;
    return arr;
}