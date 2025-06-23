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
    void trav(TreeNode* root, vector<int>& vec){
        if(root==NULL) return;
        trav(root->left, vec);
        trav(root->right, vec);
        vec.push_back(root->val);     
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>vec;
        trav(root, vec);
        return vec;
    }
};