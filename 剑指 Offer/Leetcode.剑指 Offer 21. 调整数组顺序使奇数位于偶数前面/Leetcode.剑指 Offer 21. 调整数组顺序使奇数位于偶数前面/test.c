#define _CRT_SECURE_NO_WARNINGS 1 
/*
输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有奇数在数组的前半部分，所有偶数在数组的后半部分。
*/

/*
输入：nums = [1,2,3,4]
输出：[1,3,2,4]
注：[3,1,2,4] 也是正确的答案之一。
*/

int* exchange(int* nums, int numsSize, int* returnSize)
{
	int* left = nums;
	int* right = nums + numsSize - 1;
	while (left < right)
	{
		while (left < right && *left % 2 == 1)//如果是奇数则跳过
			left++;
		while (left < right && *right % 2 == 0)//如果是偶数则跳过
			right--;
		//若在左边找到偶数，右边找到奇数了，上方两个循环不再进行，开始交换
		int tmp = *left;
		*left = *right;
		*right = tmp;
	}
	*returnSize = numsSize;
	return nums;
}