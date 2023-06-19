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
    
    
    int solve(TreeNode* root, int low, int high){
        if(root==NULL){
            return 0;
        }
        int ans=0;
        bool isInRange = false;
        if(root->val >=low && root->val <=high){
            isInRange=true;
            ans+=root->val;
        }
        if ((isInRange||root->val <= low)) ans += solve(root->right, low, high);
        if ((isInRange||root->val >= high)) ans += solve(root->left, low, high);
        return ans;
        
    }
    
    
    int rangeSumBST(TreeNode* root, int low, int high) {
     return solve(root,low,high);
    }
};