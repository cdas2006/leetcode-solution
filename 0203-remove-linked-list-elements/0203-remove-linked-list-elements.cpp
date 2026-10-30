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
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* pre = nullptr;


        while(head && head->val==val)
        {
            ListNode *temp=head;
            head=head->next;
            delete temp;
        }

        if (head == nullptr)
            return nullptr;

        ListNode* cur = head;

        while (cur) {
            if (cur->val == val) {
                ListNode* fut = cur->next;
                delete cur;
                pre->next = fut;
                cur = fut;
            }

            else {
                pre = cur;
                cur = cur->next;
            }
        }

        return head;
    }
};