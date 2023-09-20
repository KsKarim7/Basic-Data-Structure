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
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(size(head) - n == 0){
//             head = head->next;
//         }
//         ListNode* temp = head;
//         int count = 0;
//         while(temp!=NULL){
//             if(size(head) - n -1 == count){
//                 temp ->next = temp->next->next;
//                 break;
//             }
//             if(temp->next ==NULL)break;
//             temp=temp->next;
//             count++;
//         }
//         return head;
//     }
// };