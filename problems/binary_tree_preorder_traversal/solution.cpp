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
    
    vector<int> op;
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> t3;
        if(root == nullptr) return t3;
        
        op.push_back(root->val);
        vector<int> tp=preorderTraversal(root->left);
        vector<int> tp2=preorderTraversal(root->right);
        return op;
    }
};