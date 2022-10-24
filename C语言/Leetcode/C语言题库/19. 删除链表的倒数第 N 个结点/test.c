#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。

示例 1：

输入：head = [1,2,3,4,5], n = 2
输出：[1,2,3,5]
示例 2：

输入：head = [1], n = 1
输出：[]
示例 3：

输入：head = [1,2], n = 1
输出：[1]

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode* fast = NULL, * slow = NULL, * prev = NULL;
    fast = slow = head;
    // 找到倒数第 k 个节点
    while (n--)
    {
        fast = fast->next;
    }
    while (fast)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
    }
    // 删除倒数第 k 个节点
    // 处理头删
    if (slow == head)
    {
        struct ListNode* newhead = slow->next; // 新头为 slow 的后一个节点
        free(head);
        head = newhead;
    }
    else
    {
        prev->next = slow->next;
        free(slow);
    }
    return head;
}