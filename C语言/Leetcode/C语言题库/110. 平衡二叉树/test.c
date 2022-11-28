#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定一个二叉树，判断它是否是高度平衡的二叉树。

本题中，一棵高度平衡二叉树定义为：

一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1 。

 

示例 1：


输入：root = [3,9,20,null,null,15,7]
输出：true
示例 2：


输入：root = [1,2,2,3,3,null,null,4,4]
输出：false
示例 3：

输入：root = []
输出：true
 

提示：

树中的节点数在范围 [0, 5000] 内
-104 <= Node.val <= 104

*/

int TreeHeight(struct TreeNode* root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = TreeHeight(root->left);
    int rightHeight = TreeHeight(root->right);

    return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}

bool isBalanced(struct TreeNode* root)
{
    // 根节点为完全二叉树
    if (root == NULL)
    {
        return true;
    }

    // 求左右两边高度
    int leftHeight = TreeHeight(root->left);
    int rightHeight = TreeHeight(root->right);

    // 绝对值大于1一定不是完全二叉树
    if (abs(leftHeight - rightHeight) > 1)
    {
        return false;
    }

    return isBalanced(root->left) && isBalanced(root->right);
}