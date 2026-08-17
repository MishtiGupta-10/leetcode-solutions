/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorderTraversal(TreeNode* root, vector<int>& inorder){
        if (root == nullptr) return;

        inorderTraversal(root->left, inorder);
        inorder.push_back(root->val);
        inorderTraversal(root->right, inorder);
    }

    void replaceValues(TreeNode* root, vector<int>& inorder, int& index){
        if (root == nullptr) return ;

        replaceValues(root->left, inorder, index);
        root -> val = inorder[index++];
        replaceValues(root->right, inorder, index);
    }

    void recoverTree(TreeNode* root) {

        if (root == nullptr) return;
        vector<int> inorder;
        inorderTraversal(root, inorder);

        sort(inorder.begin(), inorder.end());
        int index = 0;
        replaceValues(root, inorder, index);

    }
};
