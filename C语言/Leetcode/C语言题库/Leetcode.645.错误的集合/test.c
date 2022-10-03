#define _CRT_SECURE_NO_WARNINGS 1
//集合 s 包含从 1 到 n 的整数。不幸的是，因为数据错误，导致集合里面某一个数字复制了成了集合里面的另外一个数字的值，导致集合 丢失了一个数字 并且 有一个数字重复 。
//
//给定一个数组 nums 代表了集合 S 发生错误后的结果。
//
//请你找出重复出现的整数，再找到丢失的整数，将它们以数组的形式返回。
//
//示例 1：
//
//输入：nums = [1, 2, 2, 4]
//输出：[2, 3]
//示例 2：
//
//输入：nums = [1, 1]
//输出：[1, 2]
void bubbleSort(int nums[], int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        int flag = 1;
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
                flag = 0;
            }
        }
        if (flag == 1)
            break;
    }
}
int* findErrorNums(int* nums, int numsSize, int* returnSize)
{
	bubbleSort(nums, numsSize);
    static ans[2] = { 0 };
    int prep = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int cur = nums[i];//本次元素
        if (cur == prep)
        {
            ans[0] = prep;
        }
        if (cur - prep > 1)//错误数字
        {
            ans[1] = prep + 1;
            //ans[1] = cur - 1;
        }
        prep = cur;//记录本次元素，用于下一次循环
        //prep = nums[i];
    }
    if (nums[numsSize - 1] != numsSize)//错误数字为n
    {
        ans[1] = numsSize;
    }
    *returnSize = 2;
    return ans;
}