#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

// vector<int> getLeftView(TreeNode<int> *root)
// {
//     //    Write your code here
//     bool freq[3005] = {false};
//     queue<pair<TreeNode<int>*,int>>q;
//     if(root) q.push({root,1});
//     vector<int>v;
//     while(!q.empty()){
//         pair<TreeNode<int>*,int>pr = q.front();
//         q.pop();
//         TreeNode<int>* node = pr.first;
//         int lvl  = pr.second;

//         if(freq[lvl] == false){
//             v.push_back(node->data);
//             freq[lvl] = true;
//         }

//         if(node->left) q.push({node->left, lvl +1});
//         if(node->right) q.push({node->right, lvl +1});

//     }
//     return v;
// }