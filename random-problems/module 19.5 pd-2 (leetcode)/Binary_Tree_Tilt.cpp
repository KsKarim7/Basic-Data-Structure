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
// class Solution {
// public:
//     int tilt = 0;
//     void Ttilt(TreeNode* root){
//         if(root == NULL){
//             return;
//         }
//         Ttilt(root->left);
//         Ttilt(root->right);
//         if(root->left == NULL && root->right == NULL){
//             tilt += abs(0+0);
//         }
//         else if(root->left == NULL){
//             tilt += abs(0 - root->right->val);
//         }
//         else if(root->right == NULL){
//             tilt += abs(root->left->val - 0);
//         }
//         else{
//             tilt += abs(root->left - root->right);
//         }
//     }
//     int findTilt(TreeNode* root) {
//         Ttilt(root);
//         return tilt;
//     }
// };