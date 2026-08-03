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
    ListNode* rotateRight(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;

        while (temp) {
            count++;
            temp = temp->next;
        }

        // edge cases
        if (count == 1 || count == k || k==0)
            return head;

        if (head == NULL || head->next == NULL)
            return head;

        k = k % count;

        if(k==0)
        return head;

        count -= k;

        ListNode *pre = NULL, *cur = head;

        while (count--) {
            pre = cur;
            cur = cur->next;
        }

        pre->next = NULL;
        ListNode* tail = cur;

        while (tail->next) {
            tail = tail->next;
        }

        tail->next = head;
        head = cur;

        return head;
    }
};