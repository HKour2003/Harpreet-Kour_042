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
 
class Solution {
public:
    void inorder(TreeNode* root,vector<int>&v)
    {
        if (root!=NULL){
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }}
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int>vc;
        inorder(root,vc);
        return vc[k - 1];
    }
};
*/
//2nd approach
class Solution {
public:
    int count=0;
    int r=0;


    void inorder(TreeNode* root, int k) {
        if (root!=NULL){
        inorder(root->left,k);
        count++;
        if(count==k){
            r=root->val;
            return;
        }
        inorder(root->right,k);
        }}
        
        
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return r;
    }
};
