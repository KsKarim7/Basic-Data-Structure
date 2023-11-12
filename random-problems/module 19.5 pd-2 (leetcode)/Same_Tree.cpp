// class Solution {
// public:
// void postOrder(TreeNode* root,vector<int>&v1){
//   // vector<int>v3;
//     if(root==NULL) return;
//     v1.push_back(root->val);
//         if(root->left == NULL){
//           v1.push_back(-1);
//           }
//           else{
//             v1.push_back(root->left->val);
//           }

//         if(root->right == NULL){
//          if(root->left!=NULL){
//                 v1.push_back(-1);
//             }
//             else{
//               v1.push_back(root->val);
//             }

//             }

//     postOrder(root->left,v1);
//     postOrder(root->right,v1);

// }
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         vector<int>v;
//         vector<int>v2;
//         postOrder(p,v);
//         postOrder(q,v2);

//         for(int data: v){
//           cout<<data<<" ";
//         }
//         for(int data: v2){
//           cout<<data<<" ";
//         }

//         return v==v2;
//     }
// };