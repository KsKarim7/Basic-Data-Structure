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
// vector<int>v;
// vector<int>vv;

// class Solution {
// public:
//     void leaf_check(TreeNode* root, int n){
//         if(root == NULL){
//             return;
//         }
//         leaf_check(root->left,n);
//         leaf_check(root->right,n);
//         if(root->left == NULL && root->right == NULL ){
//             if(n == 0){
//                 v.push_back(root->val);
//             }
//             else if(n == 1){
//                 vv.push_back(root->val);
//             }
//         }
//     }
//     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//         bool flag = true;
//         leaf_check(root1,0);
//         leaf_check(root2,1);
//         while(!v.empty()){
//             if(v.front() != vv.front()){
//                 flag = false;
//                 break;
//             }
//             v.pop_back();
//             vv.pop_back();
//         }
//         return flag;
//     }
// };