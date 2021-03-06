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
        ListNode dummy = ListNode(0);
        ListNode* tail = &dummy;
        
        while(head) {
            if(head->val != val) {
                tail->next = head;
                tail = tail->next;
            }
            head = head->next;
        }
        tail->next = nullptr;
        return dummy.next;
    }
};