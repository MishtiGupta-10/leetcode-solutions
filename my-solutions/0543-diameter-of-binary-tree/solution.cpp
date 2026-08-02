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
    int diameter = 0;

    int calculateHeight(TreeNode* node){
        if(node == nullptr) return 0;

        int lh = calculateHeight(node -> left);
        int rh = calculateHeight(node -> right);

        diameter = max(diameter, lh+rh);

        return 1 + max(lh,rh);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {

        if (root == NULL) return 0;

        calculateHeight(root);

        return diameter;
    }
};
