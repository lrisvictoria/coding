#define _CRT_SECURE_NO_WARNINGS 1 

/*
����һ�������ͷ��㣬���� ��β��ͷ ��˳�򷵻ؽڵ��ֵ��

���صĽ��������洢��

���ݷ�Χ
0�� ������ ��1000��

����
���룺[2, 3, 5]
���أ�[5, 3, 2]
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
    // 1. ���������
    while (cur)
    {
        cur = cur->next;
        ++len;
    }
    int* ans = (int*)malloc(sizeof(int) * len);
    cur = head;
    // 2. ����������Ԫ�ش�������
    while (len--)
    {
        ans[len] = cur->val;
        cur = cur->next;
    }
    return ans;
}