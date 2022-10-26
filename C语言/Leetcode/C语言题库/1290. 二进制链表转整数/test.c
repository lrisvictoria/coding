#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一个单链表的引用结点 head。链表中每个结点的值不是 0 就是 1。已知此链表是一个整数数字的二进制表示形式。

请你返回该链表所表示数字的 十进制值 。

示例 1：

输入：head = [1,0,1]
输出：5
解释：二进制数 (101) 转化为十进制数 (5)
示例 2：

输入：head = [0]
输出：0
示例 3：

输入：head = [1]
输出：1
示例 4：

输入：head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
输出：18880
示例 5：

输入：head = [0,0]
输出：0

*/

/*
思路：算出链表长度，然后从前往后迭代，使用 pow 函数计算每一个二进制对应的值
     然后累加返回即可
*/
int getDecimalValue(struct ListNode* head)
{
    struct ListNode* cur = head, * curr = head;
    int len = 0;
    while (cur)
    {
        cur = cur->next;
        len++;
    }
    // 此时已经算出链表长度
    int digit = 0;
    while (curr)
    {
        digit += (curr->val) * (int)pow(2, len - 1);
        len--;
        curr = curr->next;
    }
    return digit;
}