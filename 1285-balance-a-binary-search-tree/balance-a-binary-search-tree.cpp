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
    vector<int> nums;
    void inorder(TreeNode* root){
        if(root == nullptr) return;

        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* Build(int l, int r){
        if(l > r) return nullptr;

        int mid = (l + r) / 2;

        TreeNode* root = new TreeNode(nums[mid]);
        root->left = Build(l, mid-1);
        root->right = Build(mid+1,r);

        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);

        return Build(0,nums.size()-1);
    }
};