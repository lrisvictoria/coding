#define _CRT_SECURE_NO_WARNINGS 1 
/*给定一个排序的整数数组 nums 和一个整数目标值 target ，
请在数组中找到 target ，并返回其下标。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
请必须使用时间复杂度为 O(log n) 的算法。
*/

/*输入: nums = [1,3,5,6], target = 7
输出: 2
*/

//二分查找
int searchInsert(int* nums, int numsSize, int target)
{
	int left = 0;
	int right = numsSize - 1;
	//一个元素也需进入
	while (left <= right)
	{
		int ans = left + (right - left) / 2;
		if (nums[ans] < target)
		{
			left = ans + 1;
		}
		else if (nums[ans] > target)
		{
			right = ans - 1;
		}
		else
		{
			return ans;//如果相等，那么元素就在这个位置插入
		}
	}
	return left;//返回的一定是左下标
}