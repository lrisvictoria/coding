#define _CRT_SECURE_NO_WARNINGS 1 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 /**
  * Definition for singly-linked list.
  * struct ListNode {
  *     int val;
  *     struct ListNode *next;
  * };
  */

void reverseLinklist(struct ListNode* head)
{
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        struct ListNode* next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
}

struct ListNode* reverseBetween(struct ListNode* head, int left, int right)
{
    // �����ڱ�λ�������� head ǰ��
    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
    newhead->next = head;
    newhead->val = -1;

    // ����ڵ��ǰ�����
    struct ListNode* prev = newhead;
    for (int i = 0; i < left - 1; i++)
    {
        prev = prev->next;
    }

    // ���ҽڵ�
    struct ListNode* rightNode = prev; // �� prev ��ʼ��
    for (int i = 0; i < right - left + 1; i++)
    {
        rightNode = rightNode->next;
    }

    // ��¼��ڵ���ҽڵ�ĺ����ڵ�
    struct ListNode* leftNode = prev->next;
    struct ListNode* next = rightNode->next;

    // �Ͽ���ڵ���ҽڵ㴦������
    prev->next = NULL;
    rightNode->next = NULL;

    // ��ת����ڵ㿪ʼ���ҽڵ����������
    reverseLinklist(leftNode);

    // �ָ�����
    prev->next = rightNode;
    leftNode->next = next;

    // ������һ���ڵ㣬�ͷ��ڱ�λ
    struct ListNode* ans = newhead->next;
    free(newhead);
    return ans;
}