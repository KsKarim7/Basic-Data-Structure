// #include <bits/stdc++.h>
// /************************************************************

//     Following is the BinaryTreeNode class structure

//     template <typename T>
//     class BinaryTreeNode {
//        public:
//         T val;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T val) {
//             this->val = val;
//             left = NULL;
//             right = NULL;
//         }
//     };

// };

// ************************************************************/
// vector<int>v;

// void level_order(BinaryTreeNode<int> *root){
//     if( root == NULL){
//         cout<<"No Tree Found"<<endl;
//         return;
//     }
//     v.push_back(root);
//     while(!v.empty()){
//         BinaryTreeNode *f = v.front();
//         v.pop_back();
//         cout<<f->val<<" ";
//         if(f->left){
//             v.push_back(f->left);
//         }
//         if(f->right){
//             v.push_back(f->right);
//         }
//     }

// vector<int> getLevelOrder(BinaryTreeNode<int> *root)
// {
//     //  Write your code here.

//     v.clear();
//     level_order(root);
//     return v;

// }