#define _CRT_SECURE_NO_WARNINGS 1 

/*
�������������һ���ڵ�ָ�룬����һ��������O(1)ʱ��ɾ���ý�㡣

��������һ�����ڣ����Ҹýڵ�һ������β�ڵ㡣

���ݷ�Χ
������ [1,500]��

����
���룺���� 1->4->6->8
      ɾ���ڵ㣺��2���ڵ㼴6��ͷ�ڵ�Ϊ��0���ڵ㣩

����������� 1->4->8
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node)
{
    node->val = node->next->val; // ��ɾ���ڵ����һ���ڵ��ֵ��������ɾ���ڵ�
    node->next = node->next->next; // �ı�ɾ���ڵ��ɾ���ڵ���һ���ڵ����һ���ڵ�����ӣ��൱�ڸ�ֵ��ɾ���ڵ����һ���ڵ�
    // ����ɾ���ڵ��ɾ��
}