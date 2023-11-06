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
// vector<int> post_order1;
// vector<int> pre_order1;

// vector<int> post_order2;
// vector<int> pre_order2;
// class Solution
// {
// public:
//     void post_order(TreeNode *root, int n)
//     {
//         if (root == NULL)
//         {
//             return;
//         }
//         post_order(root->left, n);
//         post_order(root->right, n);
//         if (n == 0)
//         {
//             post_order1.push_back(root->val);
//         }
//         else
//         {
//             post_order2.push_back(root->val);
//         }
//     }
//     void pre_order(TreeNode *root, int n)
//     {
//         if (root == NULL)
//         {
//             return;
//         }
//         if (n == 0)
//         {
//             pre_order1.push_back(root->val);
//         }
//         else
//         {
//             pre_order2.push_back(root->val);
//         }
//         pre_order(root->left, n);
//         pre_order(root->right, n);
//     }

// bool check_tree(){
//     flag = true;
//     while(!post_order1.empty()){
//         if(post_order1.front() != post_order2.front()){
//             flag= false;
//             break;
//         }
//         post_order1.pop_back();
//         post_order2.pop_back();
//     }
// }

//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         bool flag = true;
//         post_order(p,0);
//         pre_order(p,0);

//         post_order(q,1);
//         pre_order(q,1);

//         while(!post_order1.empty()){
//             if(post_order1.front() != post_order2.front()){
//                 flag= false;
//                 break;
//             }
//             post_order1.pop_back();
//             post_order2.pop_back();
//         }
//         while(!pre_order1.empty()){
//             if(pre_order1.front() != pre_order2.front()){
//                 flag = false;
//                 break;
//             }
//             pre_order1.pop_back();
//             pre_order2.pop_back();
//         }
//         return flag;
//     }
// };