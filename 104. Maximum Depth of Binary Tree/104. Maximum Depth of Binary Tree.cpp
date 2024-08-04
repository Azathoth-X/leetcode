class Solution {
public:
    int maxDepth(TreeNode* root) {
         if(root == NULL){
            return 0;
        }
        int leftans = maxDepth(root->left);
        int rightans = maxDepth(root->right);
        return (max(leftans, rightans) + 1);
    }
};