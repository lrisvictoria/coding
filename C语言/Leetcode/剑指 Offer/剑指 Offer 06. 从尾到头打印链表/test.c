#define _CRT_SECURE_NO_WARNINGS 1 

// ����һ�������ͷ�ڵ㣬��β��ͷ����������ÿ���ڵ��ֵ�������鷵�أ���

//ʾ�� 1��
//
//���룺head = [1, 3, 2]
//�����[2, 3, 1]

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */

// ������������ȣ�Ȼ�󿪱�����
// ��ͷ��ʼ��Ԫ�ص��ŷ���������
// ��󷵻�����

int* reversePrint(struct ListNode* head, int* returnSize)
{
    struct ListNode* cur, * curr;
    cur = curr = head;
    int len = 0;
    // ���������
    while (cur)
    {
        cur = cur->next;
        ++len;
    }
    // ��������
    int* ans = (int*)malloc(sizeof(int) * len);
    *returnSize = len;
    while (len--)
    {
        ans[len] = curr->val;
        curr = curr->next;
    }
    return ans;
}