#define _CRT_SECURE_NO_WARNINGS 1 

/*
����һ�����������һ��ʱ�临�Ӷ�ΪO(n),����ռ临�Ӷ�ΪO(1)���㷨���ж����Ƿ�Ϊ���Ľṹ��

����һ�������ͷָ��A���뷵��һ��boolֵ���������Ƿ�Ϊ���Ľṹ����֤������С�ڵ���900��

����������
1->2->2->1
���أ�true

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
        // ͷ��
        cur->next = newNode;
        newNode = cur;

        // cur����
        cur = next;
    }

    return newNode;
}

class PalindromeList {
public:
    bool chkPalindrome(ListNode* A) {
        struct ListNode* mid = middleNode(A);
        struct ListNode* rHead = reverseList(mid);

        // A��rHeadһ�㲻��ֱ��ʹ�ã�����һ��
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