#define _CRT_SECURE_NO_WARNINGS 1 

//如果二叉树每个节点都具有相同的值，那么该二叉树就是单值二叉树。
//
//只有给定的树是单值二叉树时，才返回 true；否则返回 false。
//
//示例 1：
//
//输入：[1, 1, 1, 1, 1, null, 1]
//输出：true
//示例 2：
//
//输入：[2, 2, 2, 5, 2]
//输出：false
//
//提示：
//
//给定树的节点数范围是 [1, 100]。
//每个节点的值都是整数，范围为 [0, 99] 。

/*
错误示范
*/

//#include <stdbool.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//typedef struct TreeNode
//{
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//};
//
//struct TreeNode* BuyBTNode(int val)
//{
//    struct TreeNode* newnode = (struct TreeNode*)malloc(sizeof(struct TreeNode*));
//    if (newnode == NULL)
//    {
//        perror("malloc fail");
//        exit(-1);
//    }
//    newnode->val = val;
//    newnode->left = NULL;
//    newnode->right = NULL;
//
//    return newnode;
//}
//
//bool isUnivalTree(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return true;
//    }
//
//    // 根和左右相等并不能说明相等
//    if (root->left && root->val == root->left->val)
//    {
//        return true;
//    }
//
//    if (root->right && root->val == root->right->val)
//    {
//        return true;
//    }
//
//    if (isUnivalTree(root->left) && isUnivalTree(root->right))
//    {
//        return true;
//    }
//    return false;
//}
//
//int main()
//{
//    struct TreeNode* n1 = BuyBTNode(1);
//    struct TreeNode* n2 = BuyBTNode(1);
//    struct TreeNode* n3 = BuyBTNode(1);
//    struct TreeNode* n4 = BuyBTNode(2);
//    
//    n1->left = n2;
//    n1->right = n3;
//    n2->left = n4;
//
//    printf("%d\n", isUnivalTree(n1));
//
//    return 0;
//}

bool isUnivalTree(struct TreeNode* root)
{
    if (root == NULL)
    {
        return true;
    }

    if (root->left && root->left->val != root->val)
    {
        return false;
    }

    if (root->right && root->right->val != root->val)
    {
        return false;
    }

    return isUnivalTree(root->left) && isUnivalTree(root->right);
}