#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一个链表的头节点 head ，旋转链表，将链表每个节点向右移动 k 个位置。

示例 1：

输入：head = [1,2,3,4,5], k = 2
输出：[4,5,1,2,3]
示例 2：


输入：head = [0,1,2], k = 4
输出：[2,0,1]

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int k)
{
    if (head == NULL)
        return NULL;
    struct ListNode* cur, * curr;
    cur = curr = head;
    int len = 1;
    // 求链表长度和尾结点
    while (cur->next)
    {
        cur = cur->next;
        ++len;
    }
    // 处理一下 k ，不合适情况返回
    k %= len;
    if (k == 0)
        return head;
    // 此时 cur 为尾结点，链接成环
    cur->next = head;
    // 遍历链表到分割节点的前一个
    for (int i = 1; i < len - k; ++i)
    {
        curr = curr->next;
    }
    // 此时 curr->next 为分割处前一个节点
    struct ListNode* ans = curr->next;
    curr->next = NULL;
    return ans;
}