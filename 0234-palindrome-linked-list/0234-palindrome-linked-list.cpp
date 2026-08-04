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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
        return 1;
        // count no of nodes
        ListNode* temp = head;
        int count = 0;

        while (temp) {
            count++;
            temp = temp->next;
        }

        count /= 2;

        ListNode *pre = NULL, *cur = head;

        while (count--) {
            pre = cur;
            cur = cur->next;
        }

        pre->next = NULL;

        // reverse second

        ListNode* fut = NULL;
        pre = NULL;

        while (cur) {
            fut = cur->next;
            cur->next = pre;
            pre = cur;
            cur = fut;
        }

        ListNode *h1 = head, *h2 = pre;

        while (h1) {
            if (h1->val != h2->val)
                return 0;

            h1 = h1->next;
            h2 = h2->next;
        }

        return 1;
    }
};