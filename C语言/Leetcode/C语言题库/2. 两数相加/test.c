#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。

请你将两个数相加，并以相同形式返回一个表示和的链表。

你可以假设除了数字 0 之外，这两个数都不会以 0 开头。

输入：l1 = [2,4,3], l2 = [5,6,4]
输出：[7,0,8]
解释：342 + 465 = 807.
示例 2：

输入：l1 = [0], l2 = [0]
输出：[0]
示例 3：

输入：l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
输出：[8,9,9,9,0,0,0,1]

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* head = NULL, * tail = NULL;
    struct ListNode* ll1 = l1, * ll2 = l2;
    head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
    int carry = 0;
    while (ll1 != NULL || ll2 != NULL)
    {
        int val1 = ll1 == NULL ? 0 : ll1->val;
        int val2 = ll2 == NULL ? 0 : ll2->val;
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        // 创建节点
        struct ListNode* cur = (struct ListNode*)malloc(sizeof(struct ListNode));
        cur->val = sum % 10;
        cur->next = NULL;
        // 尾插
        tail->next = cur;
        tail = cur;
        // 迭代
        if (ll1 != NULL)
            ll1 = ll1->next;
        if (ll2 != NULL)
            ll2 = ll2->next;
    }
    if (carry == 1)
    {
        struct ListNode* end = (struct ListNode*)malloc(sizeof(struct ListNode));
        end->val = carry;
        end->next = NULL;
        tail->next = end;
        tail = end;
    }
    struct ListNode* ans = head->next;
    free(head);
    return ans;
}