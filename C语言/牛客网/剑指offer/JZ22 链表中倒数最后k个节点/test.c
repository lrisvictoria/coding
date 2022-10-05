#define _CRT_SECURE_NO_WARNINGS 1

/*
����
����һ����������������е�����k����㡣
ʾ��1
���룺
1,{1,2,3,4,5}
����ֵ��
{5}
*/

// ˼·1��ֱ�ӷ�
// ��������ȣ�����������-k���صĽڵ���ǵ�����k���ڵ�

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

// ˼·2������ָ�룬��ָ������k����ͣ��
// Ȼ�����ָ��ֱ��ߣ���ָ���ߵ�NULLֹͣ��slow���ǵ�����K���ڵ�

struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
{
    struct ListNode* fast, * slow;
    fast = slow = pListHead;

    while (k--)
    {
        // һ��Ҫ���������ֹ������(�����ǵ�һ��)
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