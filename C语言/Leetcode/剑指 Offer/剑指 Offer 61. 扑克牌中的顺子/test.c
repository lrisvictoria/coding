#define _CRT_SECURE_NO_WARNINGS 1 

/*

从若干副扑克牌中随机抽 5 张牌，判断是不是一个顺子，即这5张牌是不是连续的。
2～10为数字本身，A为1，J为11，Q为12，K为13，而大、小王为 0 ，可以看成任意数字。A 不能视为 14。

*/

//示例 1:
//
//输入: [1, 2, 3, 4, 5]
//输出 : True
//
//
//示例 2 :
//
//输入 : [0, 0, 1, 2, 5]
//输出 : True

// 思路：能打出顺子，那么顺序就一定要连续，并且不能重复
// 大小王为万能牌
// 那么我先将数组排序，那么就把能组成顺子的排序排好了
// 剩下的就是大小王那么，我只需要记录到大小王后面的位置
// 比如一个顺子 5 6 7 8 9
// 那么 第一个 数 和 最后一个数的差值一定小于五
// 再举一个大小王的例子
// 0 0 1 3 5
// 这样条件也满足

int cmp_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

bool isStraight(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(nums[0]), cmp_int);
    int joker = 0;
    for (int i = 0; i < numsSize - 1; i++)
    {
        // 调整到大小王后面的位置
        if (nums[i] == 0)
            joker++;
        else if (nums[i] == nums[i + 1]) // 说明有对子，肯定不是顺子
            return false;
    }
    return nums[4] - nums[joker] < 5;
}