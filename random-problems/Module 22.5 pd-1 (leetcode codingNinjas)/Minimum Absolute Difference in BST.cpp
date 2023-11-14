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
// class Solution {
// public:
//     void inOrder(TreeNode* root){
//         if(root == NULL){
//             return;
//         }
//         inOrder(root->left);
//         v.push_back(root->val);
//         inOrder(root->right);
//     }
//     int getMinimumDifference(TreeNode* root) {
//         int min = INT_MAX;
//         inOrder(root);
//         int j = 1;
//         for(int i = 0;i<v.size()-1;i++){
//             if(min > abs(v[i] - v[j])){
//                 min = abs(v[i] - v[j]);
//             }
//             j++;
//         }
//         return min;

//     }
// };