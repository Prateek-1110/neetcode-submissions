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
    void f(TreeNode* root, vector<TreeNode*>& res) {
        if (!root) return;
        f(root->left, res);
        res.push_back(root);
        f(root->right, res);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<TreeNode*> res;
        f(root, res);
        return res[k - 1]->val;
    }
};
