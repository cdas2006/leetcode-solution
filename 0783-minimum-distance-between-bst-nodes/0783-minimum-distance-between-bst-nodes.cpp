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
    void minDist(TreeNode* root,int &pre,int &ans)
    {
        if(!root)
        return;

        minDist(root->left,pre,ans);
        if(pre!=INT_MIN)
       ans = min(ans,root->val-pre);
       pre = root->val;
       minDist(root->right,pre,ans);
    }
    int minDiffInBST(TreeNode* root) {
        int pre = INT_MIN;
        int ans = INT_MAX;
        minDist(root,pre,ans);

        return ans;
    }
};