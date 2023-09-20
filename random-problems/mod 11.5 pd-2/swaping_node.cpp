// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     int size(ListNode *head){
//         ListNode *temp  = head;
//         int len = 0;
//         while(temp != NULL){
//             temp = temp->next;
//             len++;
//         }
//         return len;
//     }
//     ListNode* swapNodes(ListNode* head, int k) {
//         if(head ==NULL) return head;
//         ListNode *temp = head;
//         ListNode *tempp = head;
//         int count = 0;
//         while(count == k-1){   
//             count++;
//             // if(temp ->next != NULL){

//             //     temp = temp->next;
//             // }
//             temp = temp->next;
//             cout<<temp->val;
//         }
//         count = 0;
//         while(size(head) - k -1== count){
//             count++;
//             // if(temp ->next != NULL){

//             //     tempp = tempp->next;
//             // }
//             tempp = tempp->next;
//             cout<<tempp->val;
//         }
//         swap(temp->val,tempp->val);
//         // cout<<temp->val<<" "<<tempp->val;
//         return head;
//     }
// };