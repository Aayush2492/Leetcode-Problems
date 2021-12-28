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
    ListNode* deleteDuplicates(ListNode* head) {
        
//         if(head == nullptr) return head;
//         if(head->next == nullptr) return head;
        
//         ListNode* first = head;
//         ListNode* last = head->next;
        
//         while(first != nullptr && last != nullptr) {
//             if(first->val != last->val) {
//                 first->next = last;
//                 first = first->next;
//                 last = last->next;
//             }
//             else {
//                 last = last->next;
//                 if(last == nullptr) first->next =nullptr;
//             }
//         }
        
//         return head;
        ListNode dummy = ListNode(0);
        ListNode* tail = &dummy;
        
        if(!head) return head;
        tail->val = head->val+1;
        
        while(head) {
            if(tail->val != head->val) {
                tail->next = head;
                tail = tail->next;
            }
            head = head->next;
        }
        tail->next = nullptr;
        return dummy.next;
        
    }
};