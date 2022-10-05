#define _CRT_SECURE_NO_WARNINGS 1 

/*
����һ�����ͷָ�� ListNode* pHead����һ��ֵx��
��дһ�δ��뽫����С��x�Ľ������������֮ǰ���Ҳ��ܸı�ԭ��������˳�򣬷����������к�������ͷָ�롣
*/

// c++����C���﷨

// ˼·�����������½ڵ㣬�����ڱ�λ
// Ȼ��Ԫ��β�嵽����
// �������������Ӳ�����
// �ǵ��ͷ��ڱ�λ������������Ϊ��

class Partition {
public:
    ListNode* partition(ListNode* pHead, int x)
    {
        struct ListNode* lessTail, * lessHead, * greaterTail, * greaterHead;
        // �����ڱ�λ
        lessTail = lessHead = (struct ListNode*)malloc(sizeof(struct ListNode));
        greaterTail = greaterHead = (struct ListNode*)malloc(sizeof(struct ListNode));

        struct ListNode* cur = pHead;

        while (cur)
        {
            if (cur->val < x)
            {
                lessTail->next = cur;
                lessTail = cur;
            }
            else
            {
                greaterTail->next = cur;
                greaterTail = cur;
            }
            cur = cur->next;
        }
        lessTail->next = greaterHead->next;
        greaterTail->next = NULL;

        struct ListNode* ans = lessHead->next;
        free(lessHead);
        free(greaterHead);
        return ans;

    }
};