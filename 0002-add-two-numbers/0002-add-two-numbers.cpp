/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* first = l1;
        ListNode* second = l2;

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        ListNode* temp1 = first;
        ListNode* temp2 = second;
        
        int carry = 0;
        int sum=0;

        while(temp1 && temp2)
        {
           sum = temp1->val + temp2->val + carry;
           carry = sum/10;
           sum%=10;
           ListNode* temp = new ListNode(sum);
           tail->next = temp;
           tail = tail->next;
           temp1=temp1->next;
           temp2=temp2->next;
        }

        while(temp1)
        {
            sum = temp1->val + carry;
             carry = sum/10;
           sum%=10;
           ListNode* temp = new ListNode(sum);
           tail->next = temp;
           tail = tail->next;
           temp1=temp1->next;
        }

         while(temp2)
        {
            sum = temp2->val + carry;
             carry = sum/10;
           sum%=10;
           ListNode* temp = new ListNode(sum);
           tail->next = temp;
           tail = tail->next;
           temp2=temp2->next;
        }

        // phir bhi carry bach jaaye to

        if(carry)
        {
            ListNode* temp = new ListNode(carry);
            tail->next = temp;
            tail = tail->next;
        }

        ListNode* head = dummy->next;
        delete dummy;

        return head;
        
    }
};