#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定一个二叉树，找出其最小深度。

最小深度是从根节点到最近叶子节点的最短路径上的节点数量。

说明：叶子节点是指没有子节点的节点。

 

示例 1：


输入：root = [3,9,20,null,null,15,7]
输出：2
示例 2：

输入：root = [2,null,3,null,4,null,5,null,6]
输出：5
 

提示：

树中节点数的范围在 [0, 105] 内
-1000 <= Node.val <= 1000

*/

int minDepth(struct TreeNode* root)
{
    if (root == NULL)
    {
        return NULL;
    }

    // 算左右高度
    int leftHeight = minDepth(root->left);
    int rightHeight = minDepth(root->right);

    // 求最小高度
    int minHeight = leftHeight < rightHeight ? leftHeight : rightHeight;

    // 两种情况
    // 1. 本身就没有左/右子树，特殊处理，一条路径上一定为0，不知道左右那边空，直接返回l+r+1
    // 2. 其他正常情况返回最小高度 + 1
    // 都是递归到最底部然后比较返回的
    return (root->left == NULL || root->right == NULL)
        ? (leftHeight + rightHeight + 1) : (minHeight + 1);
}