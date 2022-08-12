#define _CRT_SECURE_NO_WARNINGS 1 
//描述
//给定一个长度为 n 的非降序数组和一个非负数整数 k ，要求统计 k 在数组中出现的次数
//
//数据范围：0 \le n \le 1000, 0 \le k \le 1000≤n≤1000, 0≤k≤100，数组中每个元素的值满足 0 \le val \le 1000≤val≤100
//要求：空间复杂度 O(1)O(1)，时间复杂度 O(logn)O(logn)
//示例1
//输入：
//[1, 2, 3, 3, 3, 3, 4, 5], 3
//返回值：
//4
//示例2
//输入：
//[1, 3, 4, 5], 6
//返回值：
//0

int GetNumberOfK(int* data, int dataLen, int k)
{
	int left = 0;
	int right = dataLen - 1;
	int arr_right = 0;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (data[mid] > k)
		{
			right = mid - 1;
		}
		else if (data[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			left += 1;
			arr_right = mid;
		}
	}
	right = arr_right;
	left = 0;
	int arr_left = right + 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (data[mid] > k)
		{
			right = mid - 1;
		}
		else if (data[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			right -= 1;
			arr_left = mid;
		}
	}
	return arr_right - arr_left + 1;
}