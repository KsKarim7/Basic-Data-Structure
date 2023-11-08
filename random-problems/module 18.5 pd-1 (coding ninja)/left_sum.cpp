#include <bits/stdc++.h>
/*
    Tree Node class.

    class BinaryTreeNode
    {
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    }
*/

// vector<int>v;

// void left_sum(BinaryTreeNode<int> *root,int n,int &lsum){
// 	// int lsum = 0;
//     if(root != NULL && n==1){
//         lsum += root->data;
//     }
// 	else if(root == NULL){
// 		return;
// 	}
// 	left_sum(root->left,1,lsum);
// 	left_sum(root->right,0,lsum);
// 	// return lsum;

// }

// long long leftSum(BinaryTreeNode<int> *root)
// {
// 	// Write your code here.
// 	v.clear();
// 	int n = 0;
// 	int lsum = 0;
// 	left_sum(root,n,lsum);
// 	return lsum;

// }