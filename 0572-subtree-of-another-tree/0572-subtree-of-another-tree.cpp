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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)
            return false;
        return isSame(root,subRoot) || isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
            
    }
    
    bool isSame(TreeNode *p, TreeNode *q){
        if(p==NULL && q==NULL)
            return true;
        if(p==NULL || q==NULL)
            return false;
        
        return q->val==p->val && isSame(p->left,q->left) && isSame(p->right, q->right);
    }
};