#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你二叉树的根节点 root ，返回它节点值的 前序 遍历。

示例 1：

输入：root = [1,null,2,3]
输出：[1,2,3]
示例 2：

输入：root = []
输出：[]
示例 3：

输入：root = [1]
输出：[1]
示例 4：

输入：root = [1,2]
输出：[1,2]
示例 5：

输入：root = [1,null,2]
输出：[1,2]

提示：

树中节点数目在范围 [0, 100] 内
-100 <= Node.val <= 100

*/

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* BuyBTNode(int val)
{
    struct TreeNode* newnode = (struct TreeNode*)malloc(sizeof(struct TreeNode*));
    if (newnode == NULL)
    {
        perror("malloc fail");
        exit(-1);
    }
    newnode->val = val;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}


void preOrderSave(struct TreeNode* root, int* ans, int* returnSize)
{
    // 如果遇到空，则返回
    if (root == NULL)
    {
        return;
    }

    // 先存，然后遍历左右子树
    ans[(*returnSize)++] = root->val;
    preOrderSave(root->left, ans, returnSize);
    preOrderSave(root->right, ans, returnSize);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    // 动态开辟一个数组
    int* ans = (int*)malloc(sizeof(int) * 2000);
    *returnSize = 0;
    preOrderSave(root, ans, returnSize);
    return ans;
}

int main()
{
    struct TreeNode* n1 = BuyBTNode(1);
    struct TreeNode* n2 = BuyBTNode(2);
    struct TreeNode* n3 = BuyBTNode(3);
    
    n1->right = n2;
    n1->left = n3;

    int returnSize = 0;
    int* ans = preorderTraversal(n1, &returnSize);
    
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}