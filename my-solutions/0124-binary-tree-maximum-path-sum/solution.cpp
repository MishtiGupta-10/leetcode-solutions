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
    int maxSum = INT_MIN;

    int maxPathSum(TreeNode* root) {

       if(root == nullptr) return 0;

       calculateSum(root, maxSum); 

       return maxSum;
        
    }
    int calculateSum(TreeNode* node, int  &maxSum){
        if(node == nullptr) return 0;

        int leftSum = max(0, calculateSum(node->left, maxSum));
        int rightSum = max(0,calculateSum(node->right, maxSum));

        maxSum = max(maxSum, leftSum + rightSum + node->val);

        return node->val + max(leftSum, rightSum);
    }
};
