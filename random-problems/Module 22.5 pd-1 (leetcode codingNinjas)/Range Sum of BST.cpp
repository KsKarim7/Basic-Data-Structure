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
//     void search(TreeNode *root,int low,int high,int &sum){
//         if(root == NULL){
//             return;
//         }
//         queue<TreeNode* >q;
//         q.push(root);
//         while(!q.empty()){
//             TreeNode *f = q.front();
//             q.pop();
//             if(f->val >= low && f->val <= high){
//                 sum += f->val;
//             }
//             if(f->left){
//                 q.push(f->left);
//             }
//             if(f->right){
//                 q.push(f->right);
//             }

//         }

//     }

//     int rangeSumBST(TreeNode* root, int low, int high) {
//         int sum = 0;
//         search(root,low,high,sum);
//         return sum;
//     }
// };