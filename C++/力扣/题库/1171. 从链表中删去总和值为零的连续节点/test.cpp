/*

*/

// ��⣺https://leetcode.cn/problems/remove-zero-sum-consecutive-nodes-from-linked-list/solution/ha-xi-biao-qian-zhui-he-by-unruffled-pik-f7ro/

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        int sum = 0;
        unordered_map<int, ListNode*> hash;
        ListNode* dummy = new ListNode(0, head);

        // ��������ǰ׺��
        for (ListNode* cur = dummy; cur != nullptr; cur = cur->next) {
            sum += cur->val;
            hash[sum] = cur;
        }

        sum = 0;
        for (ListNode* cur = dummy; cur != nullptr; cur = cur->next) {
            // �����ǰ�ڵ��ǰ׺�͵���ĳλ��ǰ׺�͵�ֵ��˵�� (cur, hash[sum] ] ���䶼��Ҫ��ɾ����
            // ��������Ϳ��԰� cur->next = hash[sum]->next
            // �����м�Ľڵ㣬��ɾ��
            sum += cur->val;
            cur->next = hash[sum]->next;
        }
        head = dummy->next;
        delete dummy;
        return head;
    }
};