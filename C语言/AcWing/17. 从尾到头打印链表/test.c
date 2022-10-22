#define _CRT_SECURE_NO_WARNINGS 1 

/*
输入一个链表的头结点，按照 从尾到头 的顺序返回节点的值。

返回的结果用数组存储。

数据范围
0≤ 链表长度 ≤1000。

样例
输入：[2, 3, 5]
返回：[5, 3, 2]
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 *
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* printListReversingly(struct ListNode* head)
{
    struct ListNode* cur = head;
    int len = 0;
    // 1. 算出链表长度
    while (cur)
    {
        cur = cur->next;
        ++len;
    }
    int* ans = (int*)malloc(sizeof(int) * len);
    cur = head;
    // 2. 遍历链表，将元素存入数组
    while (len--)
    {
        ans[len] = cur->val;
        cur = cur->next;
    }
    return ans;
}