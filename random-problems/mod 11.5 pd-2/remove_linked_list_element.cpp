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
//     ListNode* removeElements(ListNode* head, int val) {
//         while(head != NULL && head->val == val){

//                 // ListNode *deleteNode = head;
//                 head = head->next;
//                 // delete deleteNode;
//         }
//         if(head ==NULL) return head;
//         ListNode* temp = head;
//         while(temp->next != NULL){
//             // if(temp->val == val){
//             //     ListNode *deleteNode = temp;
//             //     temp = temp->next;
//             //     delete deleteNode;
//             // }
//             if(val == temp->next->val){
//                 temp->next = temp->next->next;
//             }
//             if(temp->next == NULL)break;
//             else if(val != temp->next->val){
//                 temp= temp->next;
//             }
//         }
//         // if(temp ->val == val){
//         //     delete temp;
//         // }
//         return head;
//     }
// };