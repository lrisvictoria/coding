#define _CRT_SECURE_NO_WARNINGS 1 

/*
�������ö������ĸ��ڵ� p �� q ����дһ���������������������Ƿ���ͬ��

����������ڽṹ����ͬ�����ҽڵ������ͬ��ֵ������Ϊ��������ͬ�ġ�



ʾ�� 1��


���룺p = [1, 2, 3], q = [1, 2, 3]
�����true
ʾ�� 2��


���룺p = [1, 2], q = [1, null, 2]
�����false
ʾ�� 3��


���룺p = [1, 2, 1], q = [1, 1, 2]
�����false


��ʾ��

�������ϵĽڵ���Ŀ���ڷ�Χ[0, 100] ��
- 104 <= Node.val <= 104
*/

bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }

    // ������ȫΪ�գ���ôֻҪ��һ��Ϊ�գ���Ϊ��
    if (p == NULL || q == NULL)
    {
        return false;
    }

    // ���������������ͬʱΪ�ղ�����������Ϊ��
    if (p->val != q->val)
    {
        return false;
    }

    // �ֱ�ݹ���������
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}