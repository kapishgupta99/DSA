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
    TreeNode* insertIntoBST(TreeNode* root, int target) {
        if(root==NULL){
            return new TreeNode(target);
        }
        else if(target>root->val){
            root->right=insertIntoBST(root->right,target);
        }
        else {
            root->left=insertIntoBST(root->left,target);
        }
        return root;
        
    }
};