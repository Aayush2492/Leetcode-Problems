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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* start = nullptr;
        ListNode* end = head;
        while(end) {
            ListNode* temp = end->next;
            end->next = start;
            start = end;
            end = temp;
        }
        return start;
    }
};