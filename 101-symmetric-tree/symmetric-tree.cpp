bool areInvert(TreeNode* p, TreeNode* q) {
       if(p == NULL and q == NULL) return true;
       if(p == NULL or q == NULL) return false;

       if(q->val != p->val) return false;
       return areInvert(p->left,q->right) and areInvert(p->right,q->left);
    }

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return areInvert(root->left, root->right);
    }
};