/*
����
��һ���ڵ���Ϊ size ���� m λ�õ� n λ��֮������䷴ת��Ҫ��ʱ�临�Ӷ� O(n)O(n)���ռ临�Ӷ� O(1)O(1)��
���磺
����������Ϊ 1\to 2 \to 3 \to 4 \to 5 \to NULL1��2��3��4��5��NULL, m=2,n=4m=2,n=4,
���� 1\to 4\to 3\to 2\to 5\to NULL1��4��3��2��5��NULL.

���ݷ�Χ�� ������ 0 < size \le 10000<size��1000��0 < m \le n \le size0<m��n��size��������ÿ���ڵ��ֵ���� |val| \le 1000�Oval�O��1000
Ҫ��ʱ�临�Ӷ� O(n)O(n) ���ռ临�Ӷ� O(n)O(n)
���ף�ʱ�临�Ӷ� O(n)O(n)���ռ临�Ӷ� O(1)O(1)
ʾ��1
���룺
{1,2,3,4,5},2,4
����
����ֵ��
{1,4,3,2,5}
����
ʾ��2
���룺
{5},1,1
����
����ֵ��
{5}
*/

// ��⣺https://www.nowcoder.com/discuss/439477388397854720

/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

class Solution {
public:
    /**
     *
     * @param head ListNode��
     * @param m int����
     * @param n int����
     * @return ListNode��
     */
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (head == nullptr || head->next == nullptr || m == n) {
            return head;
        }
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        // �� prev ��������ת�����׽ڵ��ǰ�����
        ListNode* prev = dummy;
        for (int i = 1; i < m; i++) {
            prev = prev->next;
        }

        // ���䷭ת
        head = prev->next;
        for (int i = m; i < n; i++) {
            ListNode* tmp = head->next;
            head->next = tmp->next;
            tmp->next = prev->next;
            prev->next = tmp;
        }

        // �ָ��ֳ�
        head = dummy->next;
        delete dummy;
        return head;
    }
};