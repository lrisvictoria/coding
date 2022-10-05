#define _CRT_SECURE_NO_WARNINGS 1

/*
描述
输入一个链表，输出该链表中倒数第k个结点。
示例1
输入：
1,{1,2,3,4,5}
返回值：
{5}
*/

// 思路1：直接法
// 算出链表长度，遍历到长度-k返回的节点就是倒数第k个节点

//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
//{
//    struct ListNode* cur, * ans;
//    cur = ans = pListHead;
//    int len = 0;
//    while (cur)
//    {
//        cur = cur->next;
//        len++;
//    }
//    if (k <= 0 || k > len)
//        return NULL;
//
//    for (int i = 0; i < len - k; i++)
//    {
//        ans = ans->next;
//    }
//    return ans;
//}

// 思路2：快慢指针，快指针先走k步，停下
// 然后快慢指针分别走，快指针走到NULL停止，slow就是倒数第K个节点

struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
{
    struct ListNode* fast, * slow;
    fast = slow = pListHead;

    while (k--)
    {
        // 一定要放在这里，防止空链表(尤其是第一次)
        if (fast == NULL)
        {
            return NULL;
        }
        fast = fast->next;
    }

    while (fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}