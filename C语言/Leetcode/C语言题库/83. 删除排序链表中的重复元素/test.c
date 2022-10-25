#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定一个已排序的链表的头 head ， 删除所有重复的元素，使每个元素只出现一次 。返回 已排序的链表 。

示例 1：

输入：head = [1,1,2]
输出：[1,2]
示例 2：

输入：head = [1,1,2,3,3]
输出：[1,2,3]
 
提示：

链表中节点数目在范围 [0, 300] 内
-100 <= Node.val <= 100
题目数据保证链表已经按升序 排列

*/

struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode* fast, * slow;
    fast = slow = head;
    struct ListNode* newhead, * newtail;
    newhead = newtail = (struct ListNode*)malloc(sizeof(struct ListNode));

    while (fast)
    {
        if (newtail == NULL)
        {
            newhead = newtail = slow;
            fast = fast->next;
        }
        if (fast->val == newtail->val)
        {
            fast = fast->next;
        }
        else
        {
            slow = fast;
            newtail->next = slow;
            newtail = slow;
            fast = fast->next;
        }
    }
    newtail->next = NULL;
    struct ListNode* ans = newhead->next;
    free(newhead);
    return ans;
}