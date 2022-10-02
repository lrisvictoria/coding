#define _CRT_SECURE_NO_WARNINGS 1 

/*
* 给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，
返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。

由于在某些语言中不能改变数组的长度，所以必须将结果放在数组nums的第一部分。
更规范地说，如果在删除重复项之后有 k 个元素，那么 nums 的前 k 个元素应该保存最终结果。

将最终结果插入 nums 的前 k 个位置后返回 k 。

不要使用额外的空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。

判题标准:

系统会用下面的代码来测试你的题解:

int[] nums = [...]; // 输入数组
int[] expectedNums = [...]; // 长度正确的期望答案

int k = removeDuplicates(nums); // 调用

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
如果所有断言都通过，那么您的题解将被 通过。

示例 1：

输入：nums = [1,1,2]
输出：2, nums = [1,2,_]
解释：函数应该返回新的长度 2 ，并且原数组 nums 的前两个元素被修改为 1, 2 。
不需要考虑数组中超出新长度后面的元素。
示例 2：

输入：nums = [0,0,1,1,1,2,2,3,3,4]
输出：5, nums = [0,1,2,3,4]
解释：函数应该返回新的长度 5 ， 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4 。
不需要考虑数组中超出新长度后面的元素。

*/

// 思路1：遍历数组，如果此元素和下一个元素相等，则进行覆盖，数组长度-1
// 并回退重新判断，注意下边界问题
// 时间复杂度：O(N^2) 空间复杂度O(1)

//int removeDuplicates(int* nums, int numsSize)
//{
//    for (int i = 0; i < numsSize - 1; i++)
//    {
//        if (nums[i] == nums[i + 1])
//        {
//            for (int j = i; j < numsSize - 1; j++)
//            {
//                nums[j] = nums[j + 1];
//            }
//            numsSize--;
//            i--;// 回退
//        }
//    }
//    return numsSize;
//}

// 思路2：双指针
//
// 1. 三下标
// 给定i = 0和j = 0，i用来规定左边界，j用来找新的边界
// nums[i] == nums[j] 说明没有找到新的边界，j++
// nums[i] != nums[j] 找到新的边界，说明上一个数字的重复部分已经跳过
// 用dest记录i位置的元素，dest++，i到新的边界，i = j，j重新开始查找
// 最后由于j的越界问题，所以需额外处理最后一个元素
// 返回dest即可
// 时间复杂度：O(N) 空间复杂度：O(1)

//int removeDuplicates(int* nums, int numsSize)
//{
//    int i = 0, j = 1;
//    int dest = 0;
//    while (j < numsSize)
//    {
//        if (nums[i] == nums[j])
//        {
//            j++;
//        }
//        else
//        {
//            nums[dest++] = nums[i];
//            i = j;
//            j++;
//        }
//    }
//    nums[dest++] = nums[i];
//    return dest;
//}

// 2下标
// 给定fast = 0，slow = 0，fast用来遍历数组
// nums[slow] == nums[fast] --> fast++，说明没找到新的数字，fast++
// nums[slow] != nums[fast] --> nums[++slow] = nums[fast++]
// slow起始位置一定不是重复的数字，所以在1下标处放置新数字
// 最后返回dest + 1(前置++，没有包含0下标)
// 时间复杂度：O(N) 空间复杂度：O(1)

// for循环
//int removeDuplicates(int* nums, int numsSize)
//{
//    int j = 0;// slow
//    for (int i = 0; i < numsSize; i++)// fast
//    {
//        if (nums[i] != nums[j])
//        {
//            nums[++j] = nums[i];
//        }
//    }
//    return j + 1;
//}

// while循环
int removeDuplicates(int* nums, int numsSize) {
    int fast = 0;
    int slow = 0;
    while (fast < numsSize)
    {
        if (nums[slow] == nums[fast])
        {
            fast++;
        }
        else
        {
            nums[++slow] = nums[fast++];
        }
    }
    return slow + 1;
}