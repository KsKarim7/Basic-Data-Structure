// /****************************************************************

//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
//             int data;
//             Node *next;
//             Node()
//             {
//                 this->data = 0;
//                 next = NULL;
//             }
//             Node(int data)
//             {
//                 this->data = data;
//                 this->next = NULL;
//             }
//             Node(int data, Node* next)
//             {
//                 this->data = data;
//                 this->next = next;
//             }
//         };


// *****************************************************************/

// class Stack
// {
//     //Write your code here



// public:

//     Node *head;
//     Node *tail;
//     int sz;
//     Stack()
//     {
//         //Write your code here
//         head = NULL;
//         tail = NULL;
//         sz = 0;
//     }

//     int getSize()
//     {
//         //Write your code here
//         return sz;
//     }

//     bool isEmpty()
//     {
//         //Write your code here
//         if(sz == 0){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     void push(int data)
//     {
//         //Write your code here
//         sz++;
//         // Node *newNode = new Node(val);
//         // if(head == NULL){
//         //     head= newNode;
//         //     tail = newNode;
//         //     return;
//         // }
//         // tail->next= newNode;
//         // tail = newNode;
//         Node *newNode = new Node(data);
//         if(head == NULL){
//             head= newNode;
//             tail = newNode;
//             return;
//         }
//         newNode->next = head;
//         head = newNode;
//     }

//     void pop()
//     {
//         //Write your code here
//         if(head == NULL){
//             return;
//         }
//         else{
//             sz--;
//             Node *deleteNode = head;
//             head = head->next;
//             delete deleteNode;
//         }
//     }

//     int getTop()
//     {
//         //Write your code here
//         if(head == NULL) return -1;
//         else{
//             return head->data;
//         }
//     }
// };