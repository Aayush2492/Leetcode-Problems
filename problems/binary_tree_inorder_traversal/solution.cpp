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
    
    void recur(vector<int>& ans, TreeNode* node){
        if(node == nullptr) return;
        recur(ans, node->left);
        ans.push_back(node->val);
        recur(ans, node->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        recur(ans, root);
        return ans;
    }
};