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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode *temp=head;
        // count the number of nodes
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        // count from starting
        count-=n;

        ListNode *pre=NULL;
        ListNode *cur=head;

        if (count==0)
        {
            head=head->next;
            delete cur;
            return head;
        }

        while(count--)
        {
          pre=cur;
          cur=cur->next;
        }

        pre->next=cur->next;
        delete cur;

        return head;
    }
};