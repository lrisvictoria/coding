#define _CRT_SECURE_NO_WARNINGS 1 

/*
对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构。

给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900。

测试样例：
1->2->2->1
返回：true

*/

struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode* fast, * slow;
    fast = slow = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* cur = head;
    struct ListNode* newNode = NULL;
    while (cur)
    {
        struct ListNode* next = cur->next;
        // 头插
        cur->next = newNode;
        newNode = cur;

        // cur迭代
        cur = next;
    }

    return newNode;
}

class PalindromeList {
public:
    bool chkPalindrome(ListNode* A) {
        struct ListNode* mid = middleNode(A);
        struct ListNode* rHead = reverseList(mid);

        // A和rHead一般不会直接使用，拷贝一份
        struct ListNode* curA = A;
        struct ListNode* curR = rHead;

        while (curA && curR)
        {
            if (curA->val != curR->val)
            {
                return false;
            }
            curA = curA->next;
            curR = curR->next;
        }
        return true;
    }
};