// LeetCode 2: Add Two Numbers
// Topic: Linked List
// Approach: Digit-by-digit addition with carry
// Time Complexity: O(n)
// Space Complexity: O(n)
2.Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
            struct ListNode *head=NULL;
            struct ListNode *tail=NULL;
            struct ListNode* temp;
            int carry=0;
            
            while(l1!=NULL || l2!=NULL || carry!=0){
                int sum=carry;//reset everytime
                if(l1!=NULL){
                    sum+=l1->val;
                    l1=l1->next;
                }
                if(l2!=NULL){
                    sum+=l2->val;
                    l2=l2->next;
                }
                int digit=sum%10;
                 carry=sum/10;
            struct ListNode* newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
            newNode->val=digit;
            newNode->next=NULL;
             if(head == NULL){
            head = newNode;
            tail = newNode;
                }
        else    {
            tail->next = newNode;
            tail = newNode;
                }
            
            /*if(head==NULL){
                head=newNode;
            }
            else 
            {
                temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=newNode;
            }
            */
            }
            return head;
}
