#define _CRT_SECURE_NO_WARNINGS 1 
/*
符合下列属性的数组 arr 称为 山脉数组 ：
arr.length >= 3
存在 i（0 < i < arr.length - 1）使得：
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
给你由整数组成的山脉数组 arr ，返回任何满足 arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] 的下标 i 。

*/

//输入：arr = [0, 1, 0]
//输出：1
//
//输入：arr = [24, 69, 100, 99, 79, 78, 67, 36, 26, 19]
//输出：2

//输入的均为山脉数组
//i < ans，arr[i]<arr[i+1]
//i >= ans，arr[i] > arr[i+1]
//题目符合小于等于x(arr[i] > arr[i + 1])的最小下标
int peakIndexInMountainArray(int* arr, int arrSize)
{
	int left = 0;
	int right = arrSize - 2;
	int ans = 0;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > arr[mid + 1])
		{
			ans = mid;
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return ans;
}