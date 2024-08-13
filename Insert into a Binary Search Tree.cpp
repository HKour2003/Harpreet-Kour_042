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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        /*    if(root==NULL){
            return new TreeNode(val); }
            else if(val<root->val){
                root->left=insertIntoBST(root->left,val);}
            else if(val>root->val){
            root->right=insertIntoBST(root->right,val);
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        /*    if(root==NULL){
            return new TreeNode(val); }
            else if(val<root->val){
                root->left=inser1tIntoBST(root->left,val);}
            else if(val>root->val){
            root->right=insertIntoBST(root->right,val);

            }
return root;
}
};
*/
//approach 2
if(root==NULL){
return new TreeNode(val);    
}
TreeNode* temp=root;
while(true){
 if(val<temp->val){
 if(temp->left==NULL){
temp->left=new TreeNode(val);
break;
}
    temp=temp->left;
 }
 
 else {
    if(temp->right==NULL){
        temp->right=new TreeNode(val);
        break;
    }
        temp=temp->right;
    }
 }
return root;
}};






 
