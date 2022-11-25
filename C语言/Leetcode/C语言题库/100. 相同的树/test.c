#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同。

如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。



示例 1：


输入：p = [1, 2, 3], q = [1, 2, 3]
输出：true
示例 2：


输入：p = [1, 2], q = [1, null, 2]
输出：false
示例 3：


输入：p = [1, 2, 1], q = [1, 1, 2]
输出：false


提示：

两棵树上的节点数目都在范围[0, 100] 内
- 104 <= Node.val <= 104
*/

bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }

    // 不可能全为空，那么只要有一个为空，则为假
    if (p == NULL || q == NULL)
    {
        return false;
    }

    // 到这里，两个不可能同时为空并且两个都不为空
    if (p->val != q->val)
    {
        return false;
    }

    // 分别递归左右子树
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}