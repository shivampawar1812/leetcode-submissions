/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != 0 && fast->next != 0){
            slow = slow->next;
            fast = (fast->next)->next;
            if(slow == fast){
                ListNode* i = head;
                ListNode* j = slow;
                while(i != j){
                    i = i->next;
                    j = j->next;
                }
                return i;
            }
        }
        return 0;
    }
};
