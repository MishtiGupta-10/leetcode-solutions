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

    void Postorder(vector<int>& Traverse, TreeNode* curr){
        if(curr == NULL){
            return;
        }

        Postorder(Traverse, curr -> left);
        Postorder(Traverse, curr -> right);
        Traverse.push_back(curr -> val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> Traverse;

        TreeNode* curr = root;

        Postorder(Traverse, curr);

        return Traverse;
    }
};
