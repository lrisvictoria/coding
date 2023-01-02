/*
��������ս������Ļʽ��ʼ�ˣ�����������һ�Ŷ������εľ������
����һ�ö����� root ������𣬽ڵ�ֵ��ʾ���������һλ�õ���ɫ���ࡣ���С�ۼ����������ж����ֲ�ͬ����ɫ��

ʾ�� 1��

���룺root = [1,3,2,1,null,2]

�����3

���ͣ�������� 3 ����ͬ����ɫ��ֵ�ֱ�Ϊ 1��2��3

ʾ�� 2��

���룺root = [3,3,3]

�����1

���ͣ�����н����� 1 ����ɫ��ֵΪ 3

��ʾ��

1 <= �ڵ���� <= 1000
1 <= Node.val <= 1000

*/

// ��⣺https://leetcode.cn/problems/sZ59z6/solution/ha-xi-biao-di-gui-by-unruffled-pikeizw-k9t8/

class Solution {
public:
    void solve(unordered_map<int, int>& color, TreeNode* root) {
        if (root == NULL) {
            return;
        }
        color[root->val]++;
        solve(color, root->left);
        solve(color, root->right);
    }
    int numColor(TreeNode* root) {
        unordered_map<int, int> color;
        solve(color, root);
        int res = 0;
        for (int i = 0; i < color.size(); i++) {
            if (color[i]) {
                res++;
            }
        }
        return res;
    }
};